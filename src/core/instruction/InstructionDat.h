#ifndef __INSTRUCTION_DAT_H__
#define __INSTRUCTION_DAT_H__

#include <string>

#include "InstructionAbstract.h"
#include "Process.h"
#include "Field.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class InstructionDat : public AbstractInstruction {
public:
	InstructionDat(Field a, Field b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__INSTRUCTION_DAT_H__