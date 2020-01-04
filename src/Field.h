#ifndef __FIELD_H__
#define __FIELD_H__

#include <string>
#include <iostream>


class Field {
	
public:
	Field(std::string s);

	uint32_t toValue();
};

std::ostream &operator<<(std::ostream &os, Field  &inst) ;

#endif //__FIELD_H__