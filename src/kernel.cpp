#include "../include/instruction.h"
#include "../include/kernel.h"
#include <vector>
#include <fstream>
#include <string>

void Kernel::load (const std::string& filename) {
    std::ifstream file(filename);
    std::string line;
    while(std::getline(file, line)) {
        instructions.push_back(Instruction::parse(line));
    }
}