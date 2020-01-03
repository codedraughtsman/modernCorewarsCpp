#include "JmpInstruction.h"

JmpInstruction::JmpInstruction(std::string a, std::string b) : 
		AbstractInstruction("JMP", a, b) {}

void JmpInstruction::execute(Process &p, CorewarsGame &game) {

}