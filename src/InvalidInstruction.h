#ifndef __INVALID_INSTRUCTION_H__
#define __INVALID_INSTRUCTION_H__

#include <string>

#include "AbstractInstruction.h"
#include "Process.h"

#include "CorewarsGame.h"

class InvalidInstruction : public AbstractInstruction {
public:
	InvalidInstruction(std::string a="0", std::string b="0");

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__INVALID_INSTRUCTION_H__