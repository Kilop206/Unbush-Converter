#include "csv_parser.hpp"

namespace unbush
{
    CsvParser::CsvParser() = default;
    CsvParser::~CsvParser() = default;

    std::vector<
        std::vector<
            std::pair<
                std::string, std::string>>> CsvParser::parse(const std::string& csv_file)
    {
        std::vector<
            std::vector<
                std::pair<
                    std::string, std::string>>> csv_files;

        return csv_files;
    }
}