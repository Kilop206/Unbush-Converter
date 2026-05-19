#pragma once

#include <string>

namespace unbush
{
    std::string
    get_extension(const std::string& file);

    bool
    file_exists(const std::string& file);
}