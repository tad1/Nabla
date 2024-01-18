// TODO: Cypi


// nsc input/simple_shader.hlsl -T ps_6_0 -E Main -Fo output/shader.ps

#include "nbl/system/IApplicationFramework.h"

#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <streambuf>

using namespace nbl;
using namespace nbl::system;
using namespace nbl::core;
using namespace nbl::asset;







class ShaderCompiler final : public system::IApplicationFramework
{
	using base_t = system::IApplicationFramework;

public:
	using base_t::base_t;

	bool onAppInitialized(smart_refctd_ptr<ISystem>&& system) override
	{
		if (system)
			m_system = std::move(system);
		else
			m_system = system::IApplicationFramework::createSystem();

		m_logger = make_smart_refctd_ptr<CStdoutLogger>();

		auto argc = argv.size();

		// expect the first argument to be
		// nsc.exe
		// second the filename of a shader to compile
		if (argc < 2) {
			m_logger->log("Insufficient arguments.", ILogger::ELL_ERROR);
			return false;
		}

		m_arguments = std::vector<std::string>(argv.begin() + 1, argv.end()); // turn argv into vector for convenience
		std::string file_to_compile = m_arguments[0];

		if (!m_system->exists(file_to_compile, IFileBase::ECF_READ)) {
			m_logger->log("Incorrect arguments. Expecting second argument to be filename of the shader intended to compile.", ILogger::ELL_ERROR);
			return false;
		}
		std::string output_filepath;
		for (auto i = 1; i < argc; i++)
		{
			if (argv[i] == "-no-nbl-builtins")
			{
				no_nbl_builtins = true;
			}
			else if (argv[i] == "-Fo")
			{
				if (i + 1 < argc) {
					i++;
					output_filepath = argv[i];
					m_logger->log("Saving compiled shader code to " + output_filepath);
				}
				else {
					m_logger->log("Incorrect arguments. Expecting filename after -Fo.", ILogger::ELL_ERROR);
				}
			}
		}
		string shader_code = open_shader_file(file_to_compile);
		auto compilation_result = compile_shader(shader_code, file_to_compile);

		// writie compiled shader to file as bytes
		std::fstream output_file(output_filepath, std::ios::out | std::ios::binary);
		output_file.write((const char*)compilation_result.objectBlob->GetBufferPointer(), compilation_result.objectBlob->GetBufferSize());
		output_file.close();
		/*std::string command = "dxc.exe";
		for (std::string arg : arguments)
		{
			command.append(" ").append(arg);
		}

		int execute = std::system(command.c_str());*/

		//std::cout << "-no-nbl-builtins - " << no_nbl_builtins;


		return true;
	}


	void workLoopBody() override {}

	bool keepRunning() override { return false; }


private:

	CHLSLCompiler::DxcCompilationResult compile_shader(std::string& shader_code, std::string_view sourceIdentifier) {
		constexpr uint32_t WorkgroupSize = 256;
		constexpr uint32_t WorkgroupCount = 2048;
		const string WorkgroupSizeAsStr = std::to_string(WorkgroupSize);
		const IShaderCompiler::SPreprocessorOptions::SMacroDefinition WorkgroupSizeDefine = { "WORKGROUP_SIZE",WorkgroupSizeAsStr };

		smart_refctd_ptr<CHLSLCompiler> hlslcompiler = make_smart_refctd_ptr<CHLSLCompiler>(std::move(m_system));

		CHLSLCompiler::SOptions options = {};
		options.stage = asset::IShader::E_SHADER_STAGE::ESS_UNKNOWN; // probably not needed, requires guessing -T target profile
		// want as much debug as possible
		options.debugInfoFlags = IShaderCompiler::E_DEBUG_INFO_FLAGS::EDIF_LINE_BIT;
		// this lets you source-level debug/step shaders in renderdoc
		//if (physDev->getLimits().shaderNonSemanticInfo)
		//options.debugInfoFlags |= IShaderCompiler::E_DEBUG_INFO_FLAGS::EDIF_NON_SEMANTIC_BIT;
		// if you don't set the logger and source identifier you'll have no meaningful errors
		options.preprocessorOptions.sourceIdentifier = sourceIdentifier;
		options.preprocessorOptions.logger = m_logger.get();
		options.preprocessorOptions.extraDefines = { &WorkgroupSizeDefine,&WorkgroupSizeDefine + 1 };

		std::vector<std::string> dxc_compile_flags_from_pragma = {};
		auto preprocessed_shader_code = hlslcompiler->preprocessShader(std::move(shader_code), options.stage, dxc_compile_flags_from_pragma, options.preprocessorOptions);

		// override arguments from command line to ones listed in pragma
		if (dxc_compile_flags_from_pragma.size())
			m_arguments = dxc_compile_flags_from_pragma;

		add_required_arguments_if_not_present();

		//convert string arguments to wstring arguments
		int arg_size = m_arguments.size() - 1; // skip input file argument
		LPCWSTR* arguments = new LPCWSTR[arg_size]; //array of pointers
		std::wstring* arguments_wdata = new std::wstring[arg_size]; // array of data, prevents deallocation before shader compilation
		for (size_t i = 0; i < arg_size; i++) {
			arguments_wdata[i] = std::wstring(m_arguments[i + 1].begin(), m_arguments[i + 1].end());
			arguments[i] = arguments_wdata[i].c_str();
		}

		auto compileResult = hlslcompiler->dxcCompile(preprocessed_shader_code, arguments, arg_size, options);
		delete[] arguments;
		delete[] arguments_wdata;
		return compileResult;
	}


	void add_required_arguments_if_not_present() {
		constexpr int required_arg_size = 8;
		std::string required_arguments[required_arg_size] = {
			"-spirv",
			"-Zpr", // Packs matrices in row-major order by default
			"-enable-16bit-types",
			"-fvk-use-scalar-layout",
			"-Wno-c++11-extensions",
			"-Wno-c++1z-extensions",
			"-Wno-gnu-static-float-init",
			"-fspv-target-env=vulkan1.3"
		};
		bool found_arg_flags[required_arg_size]{};
		int argc = m_arguments.size();
		for (int i = 0; i < argc; i++)
		{
			for (int j = 0; j < required_arg_size; j++)
			{
				if (m_arguments[i] == required_arguments[j]) {
					found_arg_flags[j] = true;
					break;
				}
			}
		}
		for (int j = 0; j < required_arg_size; j++)
		{
			if (!found_arg_flags[j]) {
				m_logger->log("Required compile flag not found " + required_arguments[j] +". This flag will be force enabled as it is required by Nabla.", ILogger::ELL_WARNING);
				m_arguments.push_back(required_arguments[j]);
			}
		}
		
	}


	std::string open_shader_file(std::string& filepath) {
		std::ifstream stream(filepath);
		std::string str((std::istreambuf_iterator<char>(stream)),
			std::istreambuf_iterator<char>());
		return str;
	}


	bool no_nbl_builtins{ false };
	smart_refctd_ptr<ISystem> m_system;
	smart_refctd_ptr<CStdoutLogger> m_logger;
	std::vector<std::string> m_arguments;

};

NBL_MAIN_FUNC(ShaderCompiler)