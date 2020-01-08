#include "InstructionInvalid.h"

InvalidInstruction::InvalidInstruction(Field a, Field b) : 
		AbstractInstruction("INVALID_INSTRUCTION", a, b) {}

void InvalidInstruction::execute(Process &p, CorewarsGame &game) {

}