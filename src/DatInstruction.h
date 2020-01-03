#ifndef __DAT_INSTRUCTION_H__
#define __DAT_INSTRUCTION_H__

#include <string>

#include "AbstractInstruction.h"
#include "Process.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class DatInstruction : public AbstractInstruction {
public:
	DatInstruction(std::string a="0", std::string b="0");

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__DAT_INSTRUCTION_H__