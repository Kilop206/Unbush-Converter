#include <stdexcept>
#include <vector>
#include <utility>
#include <string>
#include <iostream>

#include "csv_parser.hpp"
#include "json_writer.hpp"

using namespace unbush;

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        throw std::runtime_error("Usage: UnbushConverter <filename>");
    }

    CsvParser parser;
    std::vector<
        std::vector<
            std::pair<
                std::string, std::string>>>
    csv_file = parser.parse(argv[1]);

    std::cout << "Funcionou\n";
    return 0;
}