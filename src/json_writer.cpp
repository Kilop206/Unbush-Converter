#include "json_writer.hpp"

#include <iostream>
#include <ostream>
#include <string>
#include <vector>

namespace unbush
{
    JsonWriter::JsonWriter() = default;

    JsonWriter::~JsonWriter() = default;

    void JsonWriter::write(std::vector<std::vector<std::string>> csv_file)
    {
        for (std::vector<std::string> parsed_csv : csv_file)
        {
            for (std::string line : parsed_csv)
            {
                std::cout << line << std::endl;
            }
        }
    }
}
