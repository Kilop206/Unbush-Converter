#pragma once

#include "../core/writer.hpp"

namespace unbush
{
    class JsonWriter : public Writer
    {
    public:
        JsonWriter();
        ~JsonWriter() override;

        void write(
            const Table& table,
            const std::string& output_file) override;
    };
}