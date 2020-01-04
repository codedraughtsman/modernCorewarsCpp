#include "Field.h"

Field::Field(std::string s) {

}

uint32_t Field::toValue() {
	return 0;
}

std::ostream &operator<<(std::ostream &os, Field  &inst) {
	os << "is a field" ;
	return os;
}