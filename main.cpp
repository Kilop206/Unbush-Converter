#include <iostream>

#include "core/parser_factory.hpp"
#include "core/writer_factory.hpp"

int main()
{
    auto parser =
        unbush::ParserFactory::create("csv");

    if (!parser)
    {
        std::cerr << "Parser inválido\n";
        return 1;
    }

    auto table =
        parser->parse("data/input.csv");

    auto writer =
        unbush::WriterFactory::create("json");

    if (!writer)
    {
        std::cerr << "Writer inválido\n";
        return 1;
    }

    writer->write(
        table,
        "output/result.json");

    std::cout << "Conversão concluída\n";

    return 0;
}