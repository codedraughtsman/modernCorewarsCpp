#ifndef __INSTRUCTION_MOV_H__
#define __INSTRUCTION_MOV_H__

#include <string>

#include "InstructionAbstract.h"
#include "Process.h"
#include "Field.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class InstructionMov : public AbstractInstruction {
public:
	InstructionMov(Field a, Field b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__INSTRUCTION_MOV_H__