#include "Instruction.h"

#include "CorewarsGame.h"

Instruction::Instruction(std::string op, std::string a, 
		std::string b) :
	m_op(op), m_a(a), m_b(b) {

}

void Instruction::execute(Process &p, CorewarsGame &game) {
	if (m_op == "mov"){
		// copies the instruction from the a field to the position specified 
		// by the y field.s

		//TODO replace stoi with a function that can handle pointers and bad arguments
		//better to add an op class that is created when the op is coverted to a string.
		int32_t aValue = std::stoi(m_a);
		int32_t bValue = std::stoi(m_b);	

		uint32_t fromIndex = game.toIndex(p.index() + aValue);
		uint32_t toIndex = game.toIndex(p.index() + bValue);

		Instruction copiedInstruction = game.instruction(fromIndex);
		
		game.instruction(toIndex) = copiedInstruction;
		p.index() = game.toIndex(p.index() + 1);
	}
}

std::string &Instruction::op() {
	return m_op;
}

std::string &Instruction::a() {
	return m_a;
}

std::string &Instruction::b() {
	return m_b;
}

 std::ostream &operator<<(std::ostream &os, Instruction  &i) {
	os << i.op() << " " << i.a() << " " << i.b() ;
	return os;
}
