cmake_minimum_required(VERSION 3.20)

project(UnbushConverter)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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

set_target_properties(UnbushConverter PROPERTIES
        OUTPUT_NAME "Unbush Converter"
)