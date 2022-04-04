#pragma once

#include "IStringWriter.h"

class FileStringWriter : public IStringWriter {
public:
    void StringWriter() override;
};
