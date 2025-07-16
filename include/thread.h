#pragma once

#include "instruction.h"
#include <vector>

class Thread {
public:
    int id;
    std::vector<int> registers;
    size_t pc = 0;

    Thread(int id);
    void execute(const Instruction& instr);
};