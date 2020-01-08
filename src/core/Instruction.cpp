#include "Instruction.h"

#include "instruction/Instructions.h"

Instruction::Instruction(std::string opString, std::string aString, 
		std::string bString) {

	InstructionType opType = INVALID;
	if (opString == "JMP") {
		opType = JMP;
	} else if (opString == "MOV") {
		opType = MOV;
	}else if (opString == "DAT") {
		opType = DAT;
	}else if (opString == "INVALID") {
		opType = INVALID;
	} 
	Field a(aString), b(bString);
	setData(opType, a, b);
}
Instruction::Instruction(InstructionType opType) {
	setData(opType, Field("0"), Field("0"));
}

Instruction::Instruction(InstructionType opType, Field a, Field b) {
	setData(opType, a,b);
}

Instruction::Instruction(const Instruction &inst)
	
{
	setData(inst.m_instructionType, inst.a(), inst.b());
}

void Instruction::setData(InstructionType opType, Field a, Field b ) {
	m_instructionType = opType;	
	if (opType == JMP) {
		m_pInstruction = std::make_shared<InstructionJmp>(a, b);
	} else if (opType == MOV) {
		m_pInstruction = std::make_shared<InstructionMov>(a, b);
	}else if (opType == DAT) {
		m_pInstruction = std::make_shared<InstructionDat>(a, b);
	}else if (opType == INVALID) {
		m_pInstruction = std::make_shared<InstructionInvalid>(a, b);
	} else {
		m_pInstruction = std::make_shared<InstructionInvalid>(a, b);
		m_instructionType = INVALID;
	}
}

bool Instruction::is(InstructionType type) {
	return m_instructionType == type;
}

std::string &Instruction::op(){
	return m_pInstruction->op();
}
std::string Instruction::op() const{
	return m_pInstruction->op();
}
Field &Instruction::a(){
	return m_pInstruction->a();
}
Field Instruction::a() const {
	return m_pInstruction->a();
}
Field &Instruction::b(){
	return m_pInstruction->b();
}
Field Instruction::b() const{
	return m_pInstruction->b();
}

void Instruction::execute(Process &p, CorewarsGame &game) {
	m_pInstruction->execute(p, game);
}

std::ostream &operator<<(std::ostream &os, Instruction  &i) {
	os << i.op() << " " << i.a() << " " << i.b() ;
	return os;
}