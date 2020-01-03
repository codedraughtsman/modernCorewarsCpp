#ifndef __INSTRUCTION_H__
#define __INSTRUCTION_H__

#include <string>
#include <iostream>

class Instruction {

	std::string m_op, m_a, m_b;
public:
	Instruction(std::string op = "DAT", std::string a="0", std::string b="0");
	
	//getters and setters
	std::string &op();
	std::string &a();
	std::string &b();
};

std::ostream &operator<<(std::ostream &os, Instruction  &i); 
#endif //__INSTRUCTION_H__
