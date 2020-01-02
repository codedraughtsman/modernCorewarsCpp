#include <iostream>

#include "CorewarsGame.h"
#include "TerminalPrinter.h"

int main(int argc, char * argv[]) {
	CorewarsGame game;
	TerminalPrinter terminal(100, 100);
	game.setSize(10);
	game.init();
	terminal.print(game);
	return 0;
}
