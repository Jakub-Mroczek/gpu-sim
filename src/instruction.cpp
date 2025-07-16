#include "instruction.h"

Instruction Instruction::parse(const std::string& line) {
    std::istringstream iss(line);
    std::string dst_reg, op, src1_reg, src2_reg;
    iss >> dst_reg >> op >> src1_reg >> src2_reg;

    return Instruction{
        op,
        std::stoi(dst_reg.substr(1)),
        std::stoi(src1_reg.substr(1)),
        std::stoi(src2_reg.substr(1))
    };
}