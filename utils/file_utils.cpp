#include "file_utils.hpp"

#include <filesystem>

namespace unbush
{
    std::string
    get_extension(const std::string& file)
    {
        std::filesystem::path path(file);

        auto extension =
            path.extension().string();

        if (!extension.empty())
        {
            extension.erase(0, 1);
        }

        return extension;
    }

    bool
    file_exists(const std::string& file)
    {
        return std::filesystem::exists(file);
    }
}