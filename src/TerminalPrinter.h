#ifndef __TERMINAL_PRINTER_H__
#define __TERMINAL_PRINTER_H__

#include "CorewarsGame.h"

class TerminalPrinter {

public:
	TerminalPrinter(uint32_t xCharsSize, uint32_t yCharSize);

	void print(CorewarsGame &game);
};
#endif //__TERMINAL_PRINTER_H__
