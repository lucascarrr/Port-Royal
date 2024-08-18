cmake_minimum_required(VERSION 3.10)
project(FCA_ToolSuite)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Add executable
add_executable(FCA_ToolSuite
    src/main.cpp
    src/Object.cpp
    src/Attribute.cpp
    # Include other .cpp files if any
)

# Include directories
include_directories(include)
