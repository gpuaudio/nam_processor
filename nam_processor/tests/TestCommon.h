/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef TEST_COMMON_H
#define TEST_COMMON_H

#include <string>

namespace {

#ifdef WIN32
static const std::string g_library_ext = ".dll";
static const std::string g_library_prefix = "";
#else
static const std::string g_library_ext = ".so";
static const std::string g_library_prefix = "lib";
#endif

#if defined GPU_AUDIO_NV
static const std::string g_test_module_name = g_library_prefix + "nam_processor_nvidia" + g_library_ext;
#elif defined GPU_AUDIO_AMD
static const std::string g_test_module_name = g_library_prefix + "nam_processor_amd" + g_library_ext;
#elif defined GPU_AUDIO_MAC
static const std::string g_test_module_name = g_library_prefix + "nam_processor" + g_library_ext;
#endif

} // namespace

#endif // TEST_COMMON_H
