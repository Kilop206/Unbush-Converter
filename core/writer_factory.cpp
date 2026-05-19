#include "writer_factory.hpp"

#include "../writer/json_writer.hpp"

namespace unbush
{
    std::unique_ptr<Writer>
    WriterFactory::create(
        const std::string& extension)
    {
        if (extension == "json")
        {
            return std::make_unique<JsonWriter>();
        }

        return nullptr;
    }
}