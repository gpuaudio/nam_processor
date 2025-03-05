/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#include "NamModuleInfoProvider.h"

#include "device/Properties.h"

#include <processor_api/DeviceCodeSpecification.h>
#include <processor_api/PlatformInfo.h>

#include <algorithm>
#include <array>
#include <codecvt>
#include <locale>
#include <regex>

#include <iostream>

#define Q(x) #x
#define QQ(x) Q(x)
#define QUOTE(x) QQ(x)

#define QUOTEW(x) (L"" QUOTE(x))

namespace {

std::vector<GPUA::processor::v2::PlatformInfo> ConstructSpecification(const std::vector<std::wstring>& archs_list) {
    std::vector<GPUA::processor::v2::PlatformInfo> result;
    std::transform(archs_list.begin(), archs_list.end(), std::back_inserter(result), [](auto& str) {
        return GPUA::processor::v2::PlatformInfo {str.c_str()};
    });
    return result;
}

std::vector<std::string> Split(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> result;
    const std::regex regex(delimiter);
    std::copy(std::sregex_token_iterator(str.begin(), str.end(), regex, -1), std::sregex_token_iterator(), std::back_inserter(result));
    return result;
}

std::vector<std::wstring> GetSupportedArchs() {
    using convert_type = std::codecvt_utf8<wchar_t>;
    std::wstring_convert<convert_type, wchar_t> converter;

#if !defined(GPU_AUDIO_MAC)
#if defined(GPU_AUDIO_NV)
    std::vector<std::string> archs = Split(CUDA_ARCHS, ":");
    std::vector<std::wstring> result;
    std::transform(archs.begin(), archs.end(), std::back_inserter(result), [&](auto str) { return converter.from_bytes("sm_" + str); });
    return result;
#elif defined(GPU_AUDIO_AMD)
    std::vector<std::string> archs = Split(HIP_ARCHS, ":");
    std::vector<std::wstring> result;
    std::transform(archs.begin(), archs.end(), std::back_inserter(result), [&](auto str) { return converter.from_bytes(str); });
    return result;
#endif
#else
    std::vector<std::string> archs = Split("arm64", ":");
    std::vector<std::wstring> result;
    std::transform(archs.begin(), archs.end(), std::back_inserter(result), [&](auto str) { return converter.from_bytes(str); });
    return result;
#endif
}
} // namespace

NamModuleInfoProvider::NamModuleInfoProvider() {
}

const std::vector<GPUA::processor::v2::PlatformInfo>& NamModuleInfoProvider::GetCodeSpecs() {
    static std::vector<std::wstring> supported_archs = GetSupportedArchs();
    static std::vector<GPUA::processor::v2::PlatformInfo> supported_specs = ConstructSpecification(supported_archs);
    return supported_specs;
}

uint32_t NamModuleInfoProvider::GetSupportPlatformCount() const noexcept {
    return static_cast<uint32_t>(GetCodeSpecs().size());
}

GPUA::processor::v2::ErrorCode NamModuleInfoProvider::GetSupportPlatformInfo(uint32_t index, const GPUA::processor::v2::PlatformInfo*& platform_info) const noexcept {
    auto& specs = GetCodeSpecs();
    if (index < specs.size()) {
        platform_info = &specs[index];
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    platform_info = nullptr;
    return GPUA::processor::v2::ErrorCode::eOutOfRange;
}

GPUA::processor::v2::ErrorCode NamModuleInfoProvider::GetModuleInfo(const GPUA::processor::v2::ModuleInfo*& module_info) const noexcept {
    module_info = &ModuleInfo;
    return GPUA::processor::v2::ErrorCode::eSuccess;
}

GPUA::processor::v2::ErrorCode NamModuleInfoProvider::GetProcessorExecutionInfo(const GPUA::processor::v2::ProcessorEntryInfo*& entry_info) const noexcept {
    // three mandatory processor device functions. DO NOT MODIFY NEXT THE THREE LINES!
    static std::wstring declare_processor = std::wstring(QUOTEW(SEL(0)));
    static std::wstring init_processor = std::wstring(QUOTEW(SEL(1)));
    static std::wstring destroy_processor = std::wstring(QUOTEW(SEL(2)));

    // Set the number of GPU tasks of the processor. Gain has only one (see GainProcessor.cu)
    static constexpr uint32_t task_cnt = 19;

    ////////////////
    // Set up processor GPU task names. Required for the engine to call the processor.

    // The SEL macro accesses GPUFUNCTIONS_SCRAMBLED (see Properties.h). Make sure
    // it has enough entries for the number of tasks (3 + 2 * task_cnt)
    // Add two entries for each additional processor task.
    static std::array<std::wstring, 2 * task_cnt> task_names = {
        QUOTEW(SEL(3)),
        QUOTEW(SEL(4)),
        QUOTEW(SEL(5)),
        QUOTEW(SEL(6)),
        QUOTEW(SEL(7)),
        QUOTEW(SEL(8)),
        QUOTEW(SEL(9)),
        QUOTEW(SEL(10)),
        QUOTEW(SEL(11)),
        QUOTEW(SEL(12)),
        QUOTEW(SEL(13)),
        QUOTEW(SEL(14)),
        QUOTEW(SEL(15)),
        QUOTEW(SEL(16)),
        QUOTEW(SEL(17)),
        QUOTEW(SEL(18)),
        QUOTEW(SEL(19)),
        QUOTEW(SEL(20)),
        QUOTEW(SEL(21)),
        QUOTEW(SEL(22)),
        QUOTEW(SEL(23)),
        QUOTEW(SEL(24)),
        QUOTEW(SEL(25)),
        QUOTEW(SEL(26)),
        QUOTEW(SEL(27)),
        QUOTEW(SEL(28)),
        QUOTEW(SEL(29)),
        QUOTEW(SEL(30)),
        QUOTEW(SEL(31)),
        QUOTEW(SEL(32)),
        QUOTEW(SEL(33)),
        QUOTEW(SEL(34)),
        QUOTEW(SEL(35)),
        QUOTEW(SEL(36)),
        QUOTEW(SEL(37)),
        QUOTEW(SEL(38)),
        QUOTEW(SEL(39)),
        QUOTEW(SEL(40))};

    // convert task names form wstring to const wchar_t*
    // Add two entries for each additional processor task.
    static std::array<const wchar_t*, 2 * task_cnt> task_names_p = {
        task_names[0].c_str(),
        task_names[1].c_str(),
        task_names[2].c_str(),
        task_names[3].c_str(),
        task_names[4].c_str(),
        task_names[5].c_str(),
        task_names[6].c_str(),
        task_names[7].c_str(),
        task_names[8].c_str(),
        task_names[9].c_str(),
        task_names[10].c_str(),
        task_names[11].c_str(),
        task_names[12].c_str(),
        task_names[13].c_str(),
        task_names[14].c_str(),
        task_names[15].c_str(),
        task_names[16].c_str(),
        task_names[17].c_str(),
        task_names[18].c_str(),
        task_names[19].c_str(),
        task_names[20].c_str(),
        task_names[21].c_str(),
        task_names[22].c_str(),
        task_names[23].c_str(),
        task_names[24].c_str(),
        task_names[25].c_str(),
        task_names[26].c_str(),
        task_names[27].c_str(),
        task_names[28].c_str(),
        task_names[29].c_str(),
        task_names[30].c_str(),
        task_names[31].c_str(),
        task_names[32].c_str(),
        task_names[33].c_str(),
        task_names[34].c_str(),
        task_names[35].c_str(),
        task_names[36].c_str(),
        task_names[37].c_str()};
    //
    ////////////////

    static GPUA::processor::v2::ProcessorEntryInfo info {
        declare_processor.c_str(),
        destroy_processor.c_str(),
        init_processor.c_str(),
        task_cnt, task_names_p.data()};

    entry_info = &info;
    return GPUA::processor::v2::ErrorCode::eSuccess;
}
