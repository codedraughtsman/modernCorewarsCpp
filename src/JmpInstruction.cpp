#include "JmpInstruction.h"

#include "CorewarsGame.h"

JmpInstruction::JmpInstruction(Field a, Field b) : 
		AbstractInstruction("JMP", a, b) {}

void JmpInstruction::execute(Process &p, CorewarsGame &game) {

}