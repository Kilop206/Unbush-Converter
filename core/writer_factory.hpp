#pragma once

#include <memory>
#include <string>

#include "writer.hpp"

namespace unbush
{
    class WriterFactory
    {
    public:
        static std::unique_ptr<Writer>
        create(const std::string& extension);
    };
}