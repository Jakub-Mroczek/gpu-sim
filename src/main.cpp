#include "instruction.h"
#include "thread.h"
#include "warp.h"
#include "kernel.h"
#include "sm.h"
#include <iostream>

int main(int argc, char** argv) {
    if (argc < 2) {
        std::cerr << "Usage: ./sim kernel.kerr\n";
        return 1;
    }

    Kernel kernel;
    kernel.load(argv[1]);

    SM sm(kernel, 4);

    for (auto& thread : sm.warp.threads) {
        for (int& reg : thread.registers) {
            reg = 1;
        }
    }

    sm.run();

    for (const auto& thread : sm.warp.threads) {
        std::cout << "Thread " << thread.id << " regs: ";
        for (int reg : thread.registers) {
            std::cout << reg << " ";
        }
        std::cout << "\n";
    }
}