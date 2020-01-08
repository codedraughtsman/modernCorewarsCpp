#ifndef __DAT_INSTRUCTION_H__
#define __DAT_INSTRUCTION_H__

#include <string>

#include "AbstractInstruction.h"
#include "Process.h"
#include "Field.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class DatInstruction : public AbstractInstruction {
public:
	DatInstruction(Field a, Field b);

	virtual void execute(Process &p, CorewarsGame &game);	
};


#endif //__DAT_INSTRUCTION_H__