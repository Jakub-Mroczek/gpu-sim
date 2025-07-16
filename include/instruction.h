#pragma once

#include <string>
#include <sstream>

class Instruction {
public:
    std::string op;
    int dst;
    int src1;
    int src2;

    static Instruction parse(const std::string& line);
};