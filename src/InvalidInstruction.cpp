#include "InvalidInstruction.h"

InvalidInstruction::InvalidInstruction(std::string a, std::string b) : 
		AbstractInstruction("INVALID_INSTRUCTION", a, b) {}

void InvalidInstruction::execute(Process &p, CorewarsGame &game) {

}