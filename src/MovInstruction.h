#ifndef __MOV_INSTRUCTION_H__
#define __MOV_INSTRUCTION_H__

#include <string>

#include "AbstractInstruction.h"
#include "Process.h"
#include "Field.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class MovInstruction : public AbstractInstruction {
public:
	MovInstruction(Field a, Field b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__MOV_INSTRUCTION_H__