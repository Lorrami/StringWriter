#include <iostream>
#include <memory>

#include "FileStringWriter.h"
#include "ConsoleStringWriter.h"
#include "StringWriterFactory.h"

int main() {
    IStringWriter* StringWriter = new FileStringWriter();
    IStringWriter* StringWriter1 = new ConsoleStringWriter();

    StringWriterFactory::CreatWriter();
    StringWriter->StringWriter("File Lorrami");
    StringWriter1->StringWriter("Console Lorrami");

    return 777;
}
