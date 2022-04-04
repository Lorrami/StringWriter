#include "StringWriterFactory.h"

int main() {
    std::unique_ptr<IStringWriter> writer = StringWriterFactory::CreatWriter(OutputType::Console);

    writer->StringWriter("Console print");

    return 777;
}
