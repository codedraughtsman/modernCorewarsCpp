#ifndef __INSTRUCTION_INTERPERTER_H__
#define __INSTRUCTION_INTERPERTER_H__

#include <string>
#include <vector>

#include "Instruction.h"

std::vector<Instruction> stringToInstructions(std::string botString);

#endif //__INSTRUCTION_INTERPERTER_H__