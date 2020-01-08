#include "InstructionDat.h"

#include "CorewarsGame.h"

DatInstruction::DatInstruction(Field a, Field b) : 
		AbstractInstruction("DAT", a, b) {}

void DatInstruction::execute(Process &p, CorewarsGame &game) {

}