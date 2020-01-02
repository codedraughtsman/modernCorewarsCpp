#ifndef __COREWARSGAME_H__
#define __COREWARSGAME_H__

#include <cstdint>
#include <vector>

#include "Instruction.h"

class CorewarsGame {

public:
	std::vector<Instruction> m_instructions;
	uint32_t m_size;

	CorewarsGame();
	void setSize(uint32_t size);
	void init(void);
	std::vector<Instruction> &instructions(void);
};
#endif //__COREWARSGAME_H__
