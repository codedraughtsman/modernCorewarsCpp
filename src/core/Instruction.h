#ifndef __INSTRUCTION_H__
#define __INSTRUCTION_H__

#include <string>
#include <memory>

#include "Process.h"
#include "instruction/InstructionAbstract.h"
#include "Field.h"

class CorewarsGame; //forward decleration to prevent circular dependency.


class Instruction {

public:
	enum  InstructionType{JMP, MOV, DAT, INVALID};

	Instruction(std::string opString, std::string a="0", std::string b="0");
	Instruction(InstructionType opType);
	Instruction(InstructionType opType, Field a, Field b);
	Instruction(const Instruction &inst);

	void setData(InstructionType opType, Field a, Field b );

	std::string &op();
	std::string op() const;
	
	Field &a();
	Field a() const ;

	Field &b();
	Field b() const;

	void execute(Process &p, CorewarsGame &game);
	
	bool is(InstructionType type);
std::shared_ptr<AbstractInstruction> m_pInstruction;
	InstructionType m_instructionType;

protected:	
	
};

std::ostream &operator<<(std::ostream &os, Instruction  &i) ;

#endif // __INSTRUCTION_H__