#include "TerminalPrinter.h"

#include <iostream>

#include "Instruction.h"


TerminalPrinter::TerminalPrinter(uint32_t xCharsSize, uint32_t yCharSize): 
	AbstractPrinter() {

}

void TerminalPrinter::message(std::string s) {
	std::cout << s << std::endl;
}

void TerminalPrinter::print(CorewarsGame &game) {
	for (Instruction inst : game.instructions()) {
		std::cout << inst << std::endl;
	}
}
