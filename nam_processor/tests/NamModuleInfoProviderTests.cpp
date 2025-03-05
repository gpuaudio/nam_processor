/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#include "TestCommon.h"

#include <os_utilities/LibraryLoader.h>
#include <processor_api/ModuleInfo.h>
#include <processor_api/ModuleInfoProvider.h>
#include <processor_api/PlatformInfo.h>

#include <gtest/gtest.h>

#include <codecvt>
#include <locale>
#include <regex>

typedef GPUA::processor::v2::ErrorCode (*CreateModuleInfoProviderType)(GPUA::processor::v2::ModuleInfoProvider*& info_provider);
typedef GPUA::processor::v2::ErrorCode (*DeleteModuleInfoProviderType)(GPUA::processor::v2::ModuleInfoProvider*);

class NamModuleInfoProviderTest : public ::testing::Test {
protected:
    void SetUp() override {
        m_handle = OpenLibrary(std::filesystem::current_path() / g_test_module_name);
        ASSERT_NE(m_handle, nullptr);
        auto CreateModuleInfoProvider = reinterpret_cast<CreateModuleInfoProviderType>(GetLibraryFunction(m_handle, "CreateModuleInfoProvider_v2"));
        ASSERT_NE(CreateModuleInfoProvider, nullptr);
        ASSERT_EQ(CreateModuleInfoProvider(m_provider), GPUA::processor::v2::ErrorCode::eSuccess);
    }

    void TearDown() override {
        auto DeleteModuleInfoProvider = reinterpret_cast<DeleteModuleInfoProviderType>(GetLibraryFunction(m_handle, "DeleteModuleInfoProvider_v2"));
        ASSERT_NE(DeleteModuleInfoProvider, nullptr);
        DeleteModuleInfoProvider(m_provider);
        CloseLibrary(m_handle);
    }

    NativeHandle m_handle;
    GPUA::processor::v2::ModuleInfoProvider* m_provider;
};

TEST_F(NamModuleInfoProviderTest, GetModuleInfo) {
    const GPUA::processor::v2::ModuleInfo* info;
    ASSERT_EQ(m_provider->GetModuleInfo(info), GPUA::processor::v2::ErrorCode::eSuccess);

    ASSERT_EQ(std::wstring(info->effect_name), L"NAM");
    ASSERT_EQ(std::wstring(info->id), L"nam");

    // version is now always valid?
    // ASSERT_TRUE(info.version);
}

TEST_F(NamModuleInfoProviderTest, GetCodeSpecs) {
#if !defined(GPU_AUDIO_MAC)
#if defined(GPU_AUDIO_NV)
    const std::wregex regex(L"(sm_[0-9]+)");
#elif defined(GPU_AUDIO_AMD)
    const std::wregex regex(L"(gfx[0-9]+[ac]?)");
#endif

    ASSERT_NE(m_provider->GetSupportPlatformCount(), 0);
    for (uint32_t i = 0; i < m_provider->GetSupportPlatformCount(); ++i) {
        const GPUA::processor::v2::PlatformInfo* spec;
        ASSERT_EQ(m_provider->GetSupportPlatformInfo(i, spec), GPUA::processor::v2::ErrorCode::eSuccess);

        ASSERT_TRUE(regex_match(spec->platform, regex));
    }
#else
    // TODO [mac]: implement once we have device code
#endif
}
