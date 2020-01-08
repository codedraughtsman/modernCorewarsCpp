#ifndef __INSTRUCTION_JMP_H__
#define __INSTRUCTION_JMP_H__

#include <string>

#include "InstructionAbstract.h"
#include "Process.h"
#include "Field.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class InstructionJmp : public AbstractInstruction {
public:
	InstructionJmp(Field a, Field b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__INSTRUCTION_JMP_H__