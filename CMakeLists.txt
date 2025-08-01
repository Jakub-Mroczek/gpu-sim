cmake_minimum_required(VERSION 3.20)
project(GPUSim CXX)

set(CMAKE_CXX_STANDARD 20)

# Include headers
include_directories(include)

# Gather all source files
file(GLOB SOURCES src/*.cpp)

# Create executable
add_executable(gpu-sim ${SOURCES})
