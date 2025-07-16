#pragma once

#include "instruction.h"
#include <vector>
#include <string>

class Kernel {
public:
    std::vector<Instruction> instructions;

    void load(const std::string& filename);
};