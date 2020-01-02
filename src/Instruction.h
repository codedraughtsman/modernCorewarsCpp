#ifndef __INSTRUCTION_H__
#define __INSTRUCTION_H__

#include <string>
#include <iostream>

class Instruction {
public:
	std::string op, a, b;
	Instruction(std::string op = "DAT", std::string a="#33", std::string b="#33");

};

std::ostream &operator<<(std::ostream &os, Instruction const &i); 
#endif //__INSTRUCTION_H__
