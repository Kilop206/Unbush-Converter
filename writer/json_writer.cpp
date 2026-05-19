#include "json_writer.hpp"

#include <fstream>

#include <nlohmann/json.hpp>

using json = nlohmann::json;

namespace unbush
{
    JsonWriter::JsonWriter() = default;
    JsonWriter::~JsonWriter() = default;

    void JsonWriter::write(
        const Table& table,
        const std::string& output_file)
    {
        json j = json::array();

        for (const auto& row : table)
        {
            json obj;

            for (const auto& [key, value] : row)
            {
                obj[key] = value;
            }

            j.push_back(obj);
        }

        std::ofstream ofs(output_file);

        ofs << j.dump(4);
    }
}