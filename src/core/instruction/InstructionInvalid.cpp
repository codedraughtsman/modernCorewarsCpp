#include "InstructionInvalid.h"

InstructionInvalid::InstructionInvalid(Field a, Field b) : 
		AbstractInstruction("INVALID_INSTRUCTION", a, b) {}

void InstructionInvalid::execute(Process &p, CorewarsGame &game) {

}