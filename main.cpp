#include "StringWriterFactory.h"

int main() {
    IStringWriter* writer = StringWriterFactory::CreatWriter(OutputType::Console);

    writer->StringWriter("File print");

    return 777;
}
