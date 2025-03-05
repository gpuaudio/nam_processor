/*
 * Copyright (c) 2022 Braingines SA - All Rights Reserved
 * Unauthorized copying of this file is strictly prohibited
 * Proprietary and confidential
 */

#ifndef NAM_NAM_MODULE_H
#define NAM_NAM_MODULE_H

#include <processor_api/ModuleBase.h>
#include <processor_api/ModuleInfoProvider.h>
#include <processor_api/ModuleSpecification.h>

class NamModule : public GPUA::processor::v2::ModuleBase {
public:
    explicit NamModule(const GPUA::processor::v2::ModuleSpecification& specification);
    ~NamModule() override = default;

    // Copy ctor and copy assignment are deleted along with move assignment operator deletion
    NamModule& operator=(NamModule&&) = delete;

    ////////////////////////////////
    // GPUA::processor::v2::Module methods
    GPUA::processor::v2::ErrorCode CreateProcessor(GPUA::processor::v2::ProcessorSpecification& specification, GPUA::processor::v2::Processor*& processor) noexcept override;
    GPUA::processor::v2::ErrorCode DeleteProcessor(GPUA::processor::v2::Processor* processor) noexcept override;
    // GPUA::processor::v2::Module methods
    ////////////////////////////////
};

#endif // NAM_NAM_MODULE_H
