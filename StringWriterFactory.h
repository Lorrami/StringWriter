#pragma once

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
        std::cout << "Console print" << std::endl;
        return std::unique_ptr<ConsoleStringWriter>();
    }
    else if (type == OutputType::File) {
        std::cout << "File print" <<std::endl;
        return std::unique_ptr<FileStringWriter>();
    }
}
