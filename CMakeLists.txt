cmake_minimum_required(VERSION 3.20)
project(GPUSim CXX)

# Use C++23
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)  # optional, for pure ISO C++

# Include headers
include_directories(include)

# Gather all source files
file(GLOB SOURCES src/*.cpp)

# Create executable
add_executable(gpu-sim ${SOURCES})
