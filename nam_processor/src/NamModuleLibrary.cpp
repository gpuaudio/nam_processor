/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#include "NamModule.h"
#include "NamDeviceCodeProvider.h"
#include "NamModuleInfoProvider.h"

#include <processor_api/ProcessorApiVersion.h>

extern "C" {

MODULE_EXPORT void GetApiVersion(uint32_t& major, uint32_t& minor, uint32_t& patch) {
    major = GPUA::processor::v2::g_processor_api_version.major;
    minor = GPUA::processor::v2::g_processor_api_version.minor;
    patch = GPUA::processor::v2::g_processor_api_version.patch;
}
MODULE_EXPORT void GetContractVersion(GPUA::processor::v2::ContractVersion& version) {
    version = GPUA::processor::v2::g_contract_version;
}

MODULE_EXPORT GPUA::processor::v2::ErrorCode CreateModule_v2(const GPUA::processor::v2::ModuleSpecification& specification, GPUA::processor::v2::Module*& module) {
    try {
        module = new NamModule(specification);
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    catch (...) {
    }
    module = nullptr;
    return GPUA::processor::v2::ErrorCode::eFail;
}

MODULE_EXPORT GPUA::processor::v2::ErrorCode DeleteModule_v2(GPUA::processor::v2::Module* module) {
    if (module) {
        delete module;
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    return GPUA::processor::v2::ErrorCode::eFail;
}

MODULE_EXPORT GPUA::processor::v2::ErrorCode CreateModuleInfoProvider_v2(GPUA::processor::v2::ModuleInfoProvider*& info_provider) {
    try {
        info_provider = new NamModuleInfoProvider();
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    catch (...) {
    }
    info_provider = nullptr;
    return GPUA::processor::v2::ErrorCode::eFail;
}

MODULE_EXPORT GPUA::processor::v2::ErrorCode DeleteModuleInfoProvider_v2(GPUA::processor::v2::ModuleInfoProvider* info_provider) {
    if (info_provider) {
        delete info_provider;
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    return GPUA::processor::v2::ErrorCode::eFail;
}

MODULE_EXPORT GPUA::processor::v2::ErrorCode CreateDeviceCodeProvider_v2(const GPUA::processor::v2::DeviceCodeSpecification& specification, GPUA::processor::v2::DeviceCodeProvider*& code_provider) {
    try {
        code_provider = new NamDeviceCodeProvider(specification);
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    catch (...) {
    }
    code_provider = nullptr;
    return GPUA::processor::v2::ErrorCode::eFail;
}

MODULE_EXPORT GPUA::processor::v2::ErrorCode DeleteDeviceCodeProvider_v2(GPUA::processor::v2::DeviceCodeProvider* code_provider) {
    if (code_provider) {
        delete code_provider;
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    return GPUA::processor::v2::ErrorCode::eFail;
}

} // extern "C"
