cmake_minimum_required(VERSION 3.20)

project(UnbushConverter)

set(CMAKE_CXX_STANDARD 20)

add_executable(UnbushConverter
        main.cpp

        core/parser_factory.cpp
        core/writer_factory.cpp

        parser/csv_parser.cpp

        writer/json_writer.cpp
)

target_include_directories(
        UnbushConverter
        PRIVATE
        src
)