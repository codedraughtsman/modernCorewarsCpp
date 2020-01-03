#include <iostream>

#include "CorewarsGame.h"
#include "TerminalPrinter.h"

int main(int argc, char * argv[]) {
	CorewarsGame game;
	TerminalPrinter terminal(100, 100);
	game.setSize(10);
	game.addBot("mov 0, 1");
	game.addBot("jmp 0, 1");
	game.run(10, terminal);

	return 0;
}
