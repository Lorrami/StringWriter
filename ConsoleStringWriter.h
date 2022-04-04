#pragma once

#include "IStringWriter.h"

class ConsoleStringWriter : public IStringWriter {
public:
    void StringWriter() override;
};
