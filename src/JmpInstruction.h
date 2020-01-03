#ifndef __JMP_INSTRUCTION_H__
#define __JMP_INSTRUCTION_H__

#include <string>

#include "AbstractInstruction.h"
#include "Process.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class JmpInstruction : public AbstractInstruction {
public:
	JmpInstruction(std::string a, std::string b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__JMP_INSTRUCTION_H__