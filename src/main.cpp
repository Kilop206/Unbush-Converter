#include <stdexcept>

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

    

    return 0;
}
