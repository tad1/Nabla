// Copyright (C) 2022 - DevSH Graphics Programming Sp. z O.O.
// This file is part of the "Nabla Engine".
// For conditions of distribution and use, see copyright notice in nabla.h

#ifndef _NBL_BUILTIN_HLSL_LIMITS_INCLUDED_
#define _NBL_BUILTIN_HLSL_LIMITS_INCLUDED_


namespace nbl
{
namespace hlsl
{

// TODO: make this enum class
enum ShaderStage : uint32_t
{
            ESS_UNKNOWN = 0,
    ESS_VERTEX = 1 << 0,
    ESS_TESSELLATION_CONTROL = 1 << 1,
    ESS_TESSELLATION_EVALUATION = 1 << 2,
    ESS_GEOMETRY = 1 << 3,
    ESS_FRAGMENT = 1 << 4,
    ESS_COMPUTE = 1 << 5,
    ESS_TASK = 1 << 6,
    ESS_MESH = 1 << 7,
    ESS_RAYGEN = 1 << 8,
    ESS_ANY_HIT = 1 << 9,
    ESS_CLOSEST_HIT = 1 << 10,
    ESS_MISS = 1 << 11,
    ESS_INTERSECTION = 1 << 12,
    ESS_CALLABLE = 1 << 13,
    ESS_ALL_GRAPHICS = 0x0000001F,
    ESS_ALL = 0x7fffffff
};

enum SampleCountFlags : uint16_t
{
            ESCF_1_BIT = 0x01,
	ESCF_2_BIT = 0x02,
	ESCF_4_BIT = 0x04,
	ESCF_8_BIT = 0x08,
	ESCF_16_BIT = 0x10,
	ESCF_32_BIT = 0x20,
	ESCF_64_BIT = 0x40
};
        
enum class ResolveModeFlags : uint16_t
{
    NONE = 0,
    SAMPLE_ZERO_BIT = 0x00000001,
    AVERAGE_BIT = 0x00000002,
    MIN_BIT = 0x00000004,
    MAX_BIT = 0x00000008
};

NBL_ENUM_ADD_BITWISE_OPERATORS(ShaderStage)
NBL_ENUM_ADD_BITWISE_OPERATORS(SampleCountFlags)
NBL_ENUM_ADD_BITWISE_OPERATORS(ResolveModeFlags)

}
}
    
#endif