#pragma once

#include <string>
#include <vector>
#include <unordered_map>

namespace unbush
{
    using Row =
        std::unordered_map<
            std::string,
            std::string>;

    using Table =
        std::vector<Row>;

    class Parser
    {
    public:
        virtual ~Parser() = default;

        virtual Table
        parse(const std::string& file) = 0;
    };
}