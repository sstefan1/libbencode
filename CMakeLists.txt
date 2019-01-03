#############################################
# Project: libbencode
# Copyright (c) 2019, Stefan Stipanovic
# License: BSD, see LICENSE for more details.
#############################################

cmake_minimum_required(VERSION 3.9.2)
project(libbencode CXX)

# Paths.
if(CMAKE_INSTALL_PREFIX_INITIALIZET_TO_DEFAULT)
    set(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR/install" CACHE PATH "default install path" FORCE)
endif()

set(INSTALL_BIN_DIR "${CMAKE_INSTALL_PREFIX}/bin")
set(INSTALL_INCLUDE_DIR "${CMAKE_INSTALL_PREFIX}/include")
set(INSTALL_LIB_DIR "${CMAKE_INSTALL_PREFIX}/lib")

# Includes.
include_directories(include)

# Compiler options.
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wpedantic -Wall -Wextra")

# add_subdirectory(include/bencode)
add_subdirectory(lib)
