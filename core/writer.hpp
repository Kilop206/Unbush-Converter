#pragma once

#include "parser.hpp"

namespace unbush
{
    class Writer
    {
    public:
        virtual ~Writer() = default;

        virtual void write(
            const Table& table,
            const std::string& output_file) = 0;
    };
}