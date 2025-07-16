#pragma once

#include "thread.h"
#include "instruction.h"
#include <vector>

class Warp {
public:
    std::vector<Thread> threads;

    Warp(int warp_size, int start_id);
    void execute(const Instruction& instr);
};