#ifndef __FIELD_NUMBER_H__
#define __FIELD_NUMBER_H__

#include <string>

#include "FieldAbstract.h"

class FieldNumber : public FieldAbstract{
protected:
	int32_t m_value;
public:
	FieldNumber(std::string s);
	int32_t toValue();
	std::string toString();

};

#endif //__FIELD_NUMBER_H__