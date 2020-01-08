#ifndef __TERMINAL_PRINTER_H__
#define __TERMINAL_PRINTER_H__

#include "AbstractPrinter.h"
#include "CorewarsGame.h"


class TerminalPrinter : public AbstractPrinter{

public:
	TerminalPrinter(uint32_t xCharsSize, uint32_t yCharSize);

	void print(CorewarsGame &game);

	void message(std::string s);
};
#endif //__TERMINAL_PRINTER_H__
