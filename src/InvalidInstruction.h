#ifndef __INVALID_INSTRUCTION_H__
#define __INVALID_INSTRUCTION_H__

#include <string>

#include "AbstractInstruction.h"
#include "Process.h"
#include "Field.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class InvalidInstruction : public AbstractInstruction {
public:
	InvalidInstruction(Field a, Field b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__INVALID_INSTRUCTION_H__