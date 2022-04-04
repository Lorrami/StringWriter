#pragma once

#include <memory>

#include "OutputType.h"
#include "IStringWriter.h"
#include "ConsoleStringWriter.h"
#include "FileStringWriter.h"

class StringWriterFactory {
public:
    static std::unique_ptr<IStringWriter> CreatWriter(OutputType type);
};

std::unique_ptr<IStringWriter> StringWriterFactory::CreatWriter(OutputType type) {
    if (type == OutputType::Console) {
        return std::make_unique<ConsoleStringWriter>();
    }
    else if (type == OutputType::File) {
        return std::make_unique<FileStringWriter>();
    }
}
