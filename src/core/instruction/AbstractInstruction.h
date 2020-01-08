#ifndef __ABSTRACT_INSTRUCTION_H__
#define __ABSTRACT_INSTRUCTION_H__

#include <string>
#include <iostream>

#include "Process.h"
#include "Field.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class AbstractInstruction {
protected:
	std::string m_op;
	Field m_a, m_b;
public:
	AbstractInstruction(std::string op, Field a, Field b);
	
	//getters and setters
	std::string &op();
	Field &a();
	Field &b();

	virtual void execute(Process &p, CorewarsGame &game);
};

std::ostream &operator<<(std::ostream &os, AbstractInstruction  &i); 
#endif //__ABSTRACT_INSTRUCTION_H__
