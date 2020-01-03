#ifndef __MOV_INSTRUCTION_H__
#define __MOV_INSTRUCTION_H__

#include <string>

#include "AbstractInstruction.h"
#include "Process.h"

#include "CorewarsGame.h"

class MovInstruction : public AbstractInstruction {
public:
	MovInstruction(std::string a, std::string b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__MOV_INSTRUCTION_H__