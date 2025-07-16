#include "warp.h"

Warp::Warp(int warp_size, int start_id) {
    for (int i = 0; i < warp_size; i++) {
        threads.emplace_back(start_id + i);
    }
}

void Warp::execute(const Instruction& instr) {
    for (auto& t : threads) {
        t.execute(instr);
    }
}