cmake_minimum_required(VERSION 3.10)
project(FCA_ToolSuite)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Fetch nlohmann_json library
include(FetchContent)
FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG        v3.11.2  # Specify the version you need
)
FetchContent_MakeAvailable(nlohmann_json)

# Add executable
add_executable(FCA_ToolSuite
    src/main.cpp
    src/Object.cpp
    src/Attribute.cpp
    src/FormalContext.cpp
    # Include other .cpp files if any
)

# Include directories
include_directories(include)

# Link the nlohmann_json library to your executable
target_link_libraries(FCA_ToolSuite PRIVATE nlohmann_json::nlohmann_json)