#include <memory>

#include "parser_factory.hpp"

#include "../parser/csv_parser.hpp"

namespace unbush
{
    std::unique_ptr<Parser>
    ParserFactory::create(
        const std::string& extension)
    {
        if (extension == "csv")
        {
            return std::make_unique<CsvParser>();
        }

        return nullptr;
    }
}