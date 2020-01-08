#include "InstructionJmp.h"

#include "CorewarsGame.h"

InstructionJmp::InstructionJmp(Field a, Field b) : 
		AbstractInstruction("JMP", a, b) {}

void InstructionJmp::execute(Process &p, CorewarsGame &game) {

}