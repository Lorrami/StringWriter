#include <iostream>

#include "FileStringWriter.h"
#include "ConsoleStringWriter.h"

int main() {
    auto StringWriter = new FileStringWriter();
    auto StringWriter1 = new ConsoleStringWriter();
    StringWriter->StringWriter();
    StringWriter1->StringWriter();

    return 777;
}
