#pragma once

#include <memory>
#include <string>

#include "parser.hpp"

namespace unbush
{
    class ParserFactory
    {
    public:
        static std::unique_ptr<Parser>
        create(const std::string& extension);
    };
}