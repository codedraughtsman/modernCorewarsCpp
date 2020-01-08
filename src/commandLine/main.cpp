#include <iostream>

#include "CorewarsGame.h"
#include "TerminalPrinter.h"

TerminalPrinter terminal(100, 100);

int main(int argc, char * argv[]) {
	CorewarsGame game;
	game.setSize(5);
	game.setTurns(5);

	game.addBot("mov 0, 1");
	game.addBot("jmp 20, 5");

	game.init();

	terminal.message("starting game");
	terminal.print(game);
	while (!game.ended()) {
		terminal.message("\n");
		game.step();
		terminal.print(game);
	}


	return 0;
}
