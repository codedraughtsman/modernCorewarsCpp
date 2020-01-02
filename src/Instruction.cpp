#include "Instruction.h"

Instruction::Instruction(std::string op, std::string a, 
		std::string b) :
	op(op), a(a),b(b) {

}

std::ostream &operator<<(std::ostream &os, Instruction const &i) {
	os << i.op << " " << i.a << " " << i.b ;
	return os;
}
