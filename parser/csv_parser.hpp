#pragma once

#include "../core/parser.hpp"

namespace unbush
{
    class CsvParser : public Parser
    {
    public:
        CsvParser();
        ~CsvParser() override;

        Table
        parse(const std::string& file) override;
    };
}