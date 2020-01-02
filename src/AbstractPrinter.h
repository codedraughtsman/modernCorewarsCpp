#ifndef __ABSTRACT_PRINTER_H__
#define __ABSTRACT_PRINTER_H__

#include <string>

//forward decleration to avoid circular dependency.
class CorewarsGame;

class AbstractPrinter {

public:

	virtual void print(CorewarsGame &game)=0;

	virtual void message(std::string s)=0;
};
#endif //__ABSTRACT_PRINTER_H__