#include "AbstractInstruction.h"

#include "CorewarsGame.h"

AbstractInstruction::AbstractInstruction(std::string op, std::string a, 
		std::string b) :
	m_op(op), m_a(a), m_b(b) {

}



std::string &AbstractInstruction::op() {
	return m_op;
}

std::string &AbstractInstruction::a() {
	return m_a;
}

std::string &AbstractInstruction::b() {
	return m_b;
}


void AbstractInstruction::execute(Process &p, CorewarsGame &game) {
	std::cout << "running Abstract instruction" << std::endl;
}

 std::ostream &operator<<(std::ostream &os, AbstractInstruction  &i) {
	os << i.op() << " " << i.a() << " " << i.b() ;
	return os;
}
