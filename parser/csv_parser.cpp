#include "csv_parser.hpp"

#include <fstream>
#include <sstream>
#include <iostream>

namespace unbush
{
    CsvParser::CsvParser() = default;
    CsvParser::~CsvParser() = default;

    Table
    CsvParser::parse(const std::string& file)
    {
        Table table;

        std::ifstream ifs(file);

        if (!ifs.is_open())
        {
            std::cerr << "Erro ao abrir arquivo\n";
            return table;
        }

        std::string line;

        std::vector<std::string> headers;

        // Cabeçalho
        if (std::getline(ifs, line))
        {
            std::stringstream ss(line);

            std::string cell;

            while (std::getline(ss, cell, ','))
            {
                headers.push_back(cell);
            }
        }

        // Dados
        while (std::getline(ifs, line))
        {
            std::stringstream ss(line);

            std::string cell;

            Row row;

            size_t index = 0;

            while (std::getline(ss, cell, ','))
            {
                if (index < headers.size())
                {
                    row[headers[index]] = cell;
                }

                ++index;
            }

            table.push_back(row);
        }

        return table;
    }
}