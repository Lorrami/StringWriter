cmake_minimum_required(VERSION 3.21)
project(StringWriter)

set(CMAKE_CXX_STANDARD 17)

set (PROJECT_SOURCES
        "IStringWriter.cpp"
        "ConsoleStringWriter.cpp"
        "FileStringWriter.cpp"
        "StringWriterFactory.cpp")

add_executable(StringWriter ${PROJECT_SOURCES})
