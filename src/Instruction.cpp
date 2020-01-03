#include "Instruction.h"

Instruction::Instruction(std::string op, std::string a, 
		std::string b) :
	m_op(op), m_a(a), m_b(b) {

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
