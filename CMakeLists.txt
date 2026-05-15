cmake_minimum_required(VERSION 3.20)

project(UnbushConverter)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
        json
        GIT_REPOSITORY https://github.com/nlohmann/json.git
        GIT_TAG v3.12.0
)

FetchContent_MakeAvailable(json)

add_executable(UnbushConverter
        src/main.cpp
        src/csv_parser.cpp
        src/json_writer.cpp
)

target_include_directories(
        UnbushConverter
        PRIVATE
        include
)

target_link_libraries(
        UnbushConverter
        PRIVATE
        nlohmann_json::nlohmann_json
)

set_target_properties(UnbushConverter PROPERTIES
        OUTPUT_NAME "Unbush Converter"
)