#include "InstructionAbstract.h"

#include "CorewarsGame.h"

AbstractInstruction::AbstractInstruction(std::string op, Field a, 
		Field b) :
	m_op(op), m_a(a), m_b(b) {

}



std::string &AbstractInstruction::op() {
	return m_op;
}

Field &AbstractInstruction::a() {
	return m_a;
}

Field &AbstractInstruction::b() {
	return m_b;
}


void AbstractInstruction::execute(Process &p, CorewarsGame &game) {
	std::cout << "running Abstract instruction" << std::endl;
}

 std::ostream &operator<<(std::ostream &os, AbstractInstruction  &i) {
	os << i.op() << " " << i.a() << " " << i.b() ;
	return os;
}
