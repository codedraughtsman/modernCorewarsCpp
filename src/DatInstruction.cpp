#include "DatInstruction.h"

#include "CorewarsGame.h"

DatInstruction::DatInstruction(std::string a, std::string b) : 
		AbstractInstruction("DAT", a, b) {}

void DatInstruction::execute(Process &p, CorewarsGame &game) {

}