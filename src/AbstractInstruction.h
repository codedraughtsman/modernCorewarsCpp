#ifndef __ABSTRACT_INSTRUCTION_H__
#define __ABSTRACT_INSTRUCTION_H__

#include <string>
#include <iostream>

#include "Process.h"

//forward declearation to prevent circular dependency.
class CorewarsGame; 

class AbstractInstruction {
protected:
	std::string m_op, m_a, m_b;
public:
	AbstractInstruction(std::string op, std::string a, std::string b);
	
	//getters and setters
	std::string &op();
	std::string &a();
	std::string &b();

	virtual void execute(Process &p, CorewarsGame &game);
};

std::ostream &operator<<(std::ostream &os, AbstractInstruction  &i); 
#endif //__ABSTRACT_INSTRUCTION_H__
