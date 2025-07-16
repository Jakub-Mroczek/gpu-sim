#include "sm.h"
#include "warp.h"
#include "kernel.h"

SM::SM(Kernel& k, int warp_size) : kernel(k), warp(warp_size, 0) {};

void SM::run() {
    for (const auto& instr : kernel.instructions) {
        warp.execute(instr);
    }
}