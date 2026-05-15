#pragma once
#include <string>
#include <vector>

namespace unbush
{
    class JsonWriter
    {
        public:
        JsonWriter();
        ~JsonWriter();

        void write(std::vector<std::vector<std::string>> csv_file);
    };
}
