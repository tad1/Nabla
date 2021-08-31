// Copyright (C) 2019 - DevSH Graphics Programming Sp. z O.O.
// This file is part of the "Nabla Engine" and was originally part of the "Irrlicht Engine"
// For conditions of distribution and use, see copyright notice in nabla.h
// See the original file in irrlicht source for authors

#ifndef __NBL_I_FILE_ARCHIVE_H_INCLUDED__
#define __NBL_I_FILE_ARCHIVE_H_INCLUDED__

#include "nbl/system/IFile.h"
#include "nbl/system/CFileView.h"

namespace nbl
{

namespace system
{

//! The FileArchive manages archives and provides access to files inside them.
class IFileArchive : public core::IReferenceCounted
{
protected:
	core::smart_refctd_ptr<IFile> m_file;
	system::logger_opt_smart_ptr m_logger;

	// TODO: This one is only required here because CFileView needs ISystem, must be removed when that's fixed
	core::smart_refctd_ptr<ISystem> m_system;
public:
	IFileArchive(core::smart_refctd_ptr<IFile>&& file, core::smart_refctd_ptr<ISystem>&& system, system::logger_opt_smart_ptr&& logger) :
		m_file(std::move(file)), m_system(std::move(system)), m_logger(std::move(logger)) {}
	//! An entry in a list of files, can be a folder or a file.
	struct SFileListEntry
	{
		//! The name of the file
		/** If this is a file or folder in the virtual filesystem and the archive
		was created with the ignoreCase flag then the file name will be lower case. */
		system::path name;

		//! The name of the file including the path
		/** If this is a file or folder in the virtual filesystem and the archive was
		created with the ignoreDirs flag then it will be the same as Name. */
		system::path fullName;

		//! The size of the file in bytes
		uint32_t size;

		//! The ID of the file in an archive
		/** This is used to link the FileList entry to extra info held about this
		file in an archive, which can hold things like data offset and CRC. */
		uint32_t ID;

		//! FileOffset inside an archive
		uint32_t offset;

		//! True if this is a folder, false if not.
		bool isDirectory;

		//! The == operator is provided so that CFileList can slowly search the list!
		inline bool operator ==(const struct SFileListEntry& other) const
		{
			if (isDirectory != other.isDirectory)
				return false;

			return core::strcmpi(fullName.string(), other.fullName.string()) == 0;
		}

		//! The < operator is provided so that CFileList can sort and quickly search the list.
		inline bool operator <(const struct SFileListEntry& other) const
		{
			if (isDirectory != other.isDirectory)
				return isDirectory;

			return fullName < other.fullName;
		}
	};
	struct SOpenFileParams
	{
		std::filesystem::path filename;
		std::string_view password;
	};

	//! Opens a file based on its name
	virtual core::smart_refctd_ptr<IFile> readFile(const SOpenFileParams& params) = 0;

	const core::vector<SFileListEntry>& getArchivedFiles() const { return m_files; }
	IFile* asFile() { return m_file.get(); }
protected:
	virtual void addItem(const system::path& fullPath, uint32_t offset, uint32_t size, bool isDirectory, uint32_t id = 0)
	{
		SFileListEntry entry;
		entry.ID = id ? id : m_files.size();
		entry.offset = offset;
		entry.size = size;
		entry.name = fullPath;
		entry.isDirectory = isDirectory;

		entry.fullName = entry.name;

		core::deletePathFromFilename(entry.name);

		//os::Printer::log(Path.c_str(), entry.FullName);

		m_files.insert(std::lower_bound(m_files.begin(), m_files.end(), entry), entry);
	}
	size_t read_blocking(system::IFile* file, void* buffer, size_t offset, size_t size)
	{
		return file->read_impl(buffer, offset, size);
	}
	size_t write_blocking(system::IFile* file, void* buffer, size_t offset, size_t size)
	{
		return file->write_impl(buffer, offset, size);
	}
	core::vector<SFileListEntry> m_files;
};


class IArchiveLoader : public core::IReferenceCounted
{
protected:
	system::logger_opt_smart_ptr m_logger;

	// TODO: This one is only required here because CFileView needs ISystem, must be removed when that's fixed
	core::smart_refctd_ptr<ISystem> m_system; 
public:
	IArchiveLoader(core::smart_refctd_ptr<ISystem>&& system, system::logger_opt_smart_ptr&& logger) :
		m_logger(std::move(logger)), m_system(std::move(system)) {}
	//! Check if the file might be loaded by this class
	/** This check may look into the file.
	\param file File handle to check.
	\return True if file seems to be loadable. */
	virtual bool isALoadableFileFormat(IFile* file) const = 0;

	//! Returns an array of string literals terminated by nullptr
	virtual const char** getAssociatedFileExtensions() const = 0;

	//! Creates an archive from the file
	/** \param file File handle to use.
	\return Pointer to newly created archive, or 0 upon error. */
	core::smart_refctd_ptr<IFileArchive> createArchive(core::smart_refctd_ptr<IFile>&& file, const std::string_view& password = "") const
	{
		if (!(file->getFlags() & IFile::ECF_READ))
			return nullptr;

		return createArchive_impl(std::move(file), password);
	}

protected:
	virtual core::smart_refctd_ptr<IFileArchive> createArchive_impl(core::smart_refctd_ptr<IFile>&& file, const std::string_view& password) const = 0;
};


} // end namespace system
} // end namespace nbl

#endif

