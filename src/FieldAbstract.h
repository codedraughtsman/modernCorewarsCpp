#ifndef __FIELD_ABSTRACT_H__
#define __FIELD_ABSTRACT_H__

#include <string>

class FieldAbstract {
public:
	virtual int32_t toValue()=0;
	virtual std::string toString()=0;

};

#endif //__FIELD_ABSTRACT_H__