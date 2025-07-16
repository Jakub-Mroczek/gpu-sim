#include "thread.h"
#include "instruction.h"

Thread::Thread(int id) : id(id), registers(16, 0) {}

void Thread::execute(const Instruction& instr) {
    if(instr.op == "ADD") {
        registers[instr.dst] = registers[instr.src1] + registers[instr.src2];
    }
    else if(instr.op == "MUL") {
        registers[instr.dst] = registers[instr.src1] * registers[instr.src2];
    }
}