#pragma once

#include "OutputType.h"
#include "IStringWriter.h"
#include "ConsoleStringWriter.h"
#include "FileStringWriter.h"

class StringWriterFactory {
public:
    static IStringWriter* CreatWriter(OutputType type);
};

IStringWriter* StringWriterFactory::CreatWriter(OutputType type) {
    if (type == OutputType::Console) {
        std::cout << "Console print" << std::endl;
        return new ConsoleStringWriter();
    }
    else if (type == OutputType::File) {
        std::cout << "File print" <<std::endl;
        return new FileStringWriter();
    }
}
