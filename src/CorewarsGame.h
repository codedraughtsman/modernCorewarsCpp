#ifndef __COREWARSGAME_H__
#define __COREWARSGAME_H__

#include <cstdint>
#include <vector>

#include "AbstractInstruction.h"
#include "AbstractPrinter.h"
#include "Process.h"

class CorewarsGame {

public:
	std::vector<AbstractInstruction> m_instructions;
	std::vector<Process> m_processes;

	uint32_t m_numberOfInstructions;
	std::vector<std::vector<AbstractInstruction>> m_bots;

	CorewarsGame();
	void setSize(uint32_t size);
	void init(void);
	std::vector<AbstractInstruction> &instructions();
	void run(uint32_t nTurns, AbstractPrinter &printer);	
	void addBot(std::string code);

	AbstractInstruction &instruction(int32_t index);

	uint32_t toIndex(int32_t index);
	
};
#endif //__COREWARSGAME_H__
