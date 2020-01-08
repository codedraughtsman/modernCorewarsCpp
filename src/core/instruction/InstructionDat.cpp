#include "InstructionDat.h"

#include "CorewarsGame.h"

InstructionDat::InstructionDat(Field a, Field b) : 
		AbstractInstruction("DAT", a, b) {}

void InstructionDat::execute(Process &p, CorewarsGame &game) {

}