#include "FieldNumber.h"

FieldNumber::FieldNumber(std::string s) {
	m_value = std::stoi(s);
	//TODO error checking.
}

int32_t FieldNumber::toValue() {
	return m_value;
}

std::string FieldNumber::toString() {
	return std::to_string(m_value);
}