#include "TerminalPrinter.h"

#include <iostream>

#include "Instruction.h"

TerminalPrinter::TerminalPrinter(uint32_t xCharsSize, uint32_t yCharSize) {

}

void TerminalPrinter::print(CorewarsGame &game) {
	for (Instruction inst : game.instructions()) {
		std::cout << inst << std::endl;
	}
}
