#include "Field.h"

#include "FieldNumber.h"

Field::Field(std::string s) {
	m_pField = std::make_shared<FieldNumber>(s);
}

uint32_t Field::toValue() {
	return m_pField->toValue();
}

std::string Field::toString() {
	return m_pField->toString();
}

std::ostream &operator<<(std::ostream &os, Field  &inst) {
	os << inst.toString() ;
	return os;
}