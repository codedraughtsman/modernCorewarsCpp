#ifndef __INSTRUCTION_INVALID_H__
#define __INSTRUCTION_INVALID_H__

#include <string>

#include "InstructionAbstract.h"
#include "Process.h"
#include "Field.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class InvalidInstruction : public AbstractInstruction {
public:
	InvalidInstruction(Field a, Field b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__INSTRUCTION_INVALID_H__