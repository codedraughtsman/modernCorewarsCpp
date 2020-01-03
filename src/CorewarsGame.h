#ifndef __COREWARSGAME_H__
#define __COREWARSGAME_H__

#include <cstdint>
#include <vector>

#include "Instruction.h"
#include "AbstractPrinter.h"

class CorewarsGame {

public:
	std::vector<Instruction> m_instructions;
	uint32_t m_numberOfInstructions;
	std::vector<std::vector<Instruction>> m_bots;

	CorewarsGame();
	void setSize(uint32_t size);
	void init(void);
	std::vector<Instruction> &instructions();
	void run(uint32_t nTurns, AbstractPrinter &printer);	
	void addBot(std::string code);
};
#endif //__COREWARSGAME_H__
