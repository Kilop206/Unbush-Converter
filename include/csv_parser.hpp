#pragma once

#include <string>
#include <utility>
#include <vector>

namespace unbush
{
    class CsvParser
    {
        public:
        CsvParser();
        ~CsvParser();

        std::vector<
            std::vector<
                std::pair<
                    std::string, std::string>>> parse(const std::string &csv_file);
    };
}
