cmake_minimum_required(VERSION 3.22.0 FATAL_ERROR)

# Configuring languages for current project
if(APPLE)
    project(nam_processor LANGUAGES C CXX)
else()
    project(nam_processor LANGUAGES C CXX CUDA)
endif()

set(cmake-common-${PROJECT_NAME}_SOURCE_DIR "${PROJECT_BINARY_DIR}/cmake-common")
list(INSERT CMAKE_MODULE_PATH 0 "${cmake-common-${PROJECT_NAME}_SOURCE_DIR}")

# Get conan dependencies
include(conan_profiles)
include(conanfile)
include(conan_toolchain)

# Include .var file with project settings
include(CMakeLists.var.cmake)

# Load our macroses
include(braingines)
