#ifndef __FIELD_H__
#define __FIELD_H__

#include <string>
#include <iostream>
#include <memory>

#include "FieldAbstract.h"

class Field {
protected:
	std::shared_ptr<FieldAbstract> m_pField;
public:
	Field(std::string s);

	uint32_t toValue();
	std::string toString();
};

std::ostream &operator<<(std::ostream &os, Field  &inst) ;

#endif //__FIELD_H__