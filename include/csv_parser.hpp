#pragma once

#include <string>
#include <vector>

namespace unbush
{
    class CsvParser
    {
    public:
        CsvParser();
        ~CsvParser();

        std::vector<std::vector<std::string>>
        parse(const std::string& csv_file);
    };
}