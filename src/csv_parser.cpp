#include "csv_parser.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

namespace unbush
{
    CsvParser::CsvParser() = default;
    CsvParser::~CsvParser() = default;

    std::vector<std::vector<std::string>>
    CsvParser::parse(const std::string& csv_file)
    {
        std::vector<std::vector<std::string>> rows;

        std::ifstream ifs(csv_file);

        if (!ifs.is_open())
        {
            std::cerr << "Erro ao abrir arquivo: "
                      << csv_file << std::endl;

            return rows;
        }

        std::string line;

        while (std::getline(ifs, line))
        {
            std::vector<std::string> columns;

            std::stringstream ss(line);

            std::string cell;

            while (std::getline(ss, cell, ','))
            {
                columns.push_back(cell);
            }

            rows.push_back(columns);
        }

        return rows;
    }
}