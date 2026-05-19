#include <iostream>

#include "core/parser_factory.hpp"
#include "core/writer_factory.hpp"

#include "utils/file_utils.hpp"

int main()
{
    std::string input =
        "data/input.csv";

    std::string output =
        "output/result.json";

    if (!unbush::file_exists(input))
    {
        std::cerr
            << "Arquivo não encontrado\n";

        return 1;
    }

    auto parser =
        unbush::ParserFactory::create(
            unbush::get_extension(input));

    if (!parser)
    {
        std::cerr
            << "Parser inválido\n";

        return 1;
    }

    auto writer =
        unbush::WriterFactory::create(
            unbush::get_extension(output));

    if (!writer)
    {
        std::cerr
            << "Writer inválido\n";

        return 1;
    }

    auto table =
        parser->parse(input);

    writer->write(table, output);

    std::cout
        << "Conversão concluída\n";

    return 0;
}