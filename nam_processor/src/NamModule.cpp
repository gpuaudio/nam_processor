/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#include "NamModule.h"
#include "NamProcessor.h"

NamModule::NamModule(const GPUA::processor::v2::ModuleSpecification& specification) :
    GPUA::processor::v2::ModuleBase(specification) {}

GPUA::processor::v2::ErrorCode NamModule::CreateProcessor(GPUA::processor::v2::ProcessorSpecification& specification, GPUA::processor::v2::Processor*& processor) noexcept {
    try {
        processor = new NamProcessor(specification, *this);
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    catch (...) {
    }
    processor = nullptr;
    return GPUA::processor::v2::ErrorCode::eFail;
}

GPUA::processor::v2::ErrorCode NamModule::DeleteProcessor(GPUA::processor::v2::Processor* processor) noexcept {
    if (processor) {
        delete processor;
        return GPUA::processor::v2::ErrorCode::eSuccess;
    }
    return GPUA::processor::v2::ErrorCode::eFail;
}
