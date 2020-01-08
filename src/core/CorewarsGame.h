#ifndef __COREWARSGAME_H__
#define __COREWARSGAME_H__

#include <cstdint>
#include <vector>

#include "Instruction.h"
#include "Process.h"

class CorewarsGame {

public:
	std::vector<Instruction> m_instructions;
	std::vector<Process> m_processes;

	uint32_t m_activeProcess;

	uint32_t m_numberOfInstructions;
	uint32_t m_numberOfTurns, m_elapsedTurns;
	std::vector<std::vector<Instruction>> m_bots;

	CorewarsGame();
	void setSize(uint32_t size);
	void setTurns(uint32_t numberOfTurns);
	void init(void);
	std::vector<Instruction> &instructions();
	void run();	
	void step();
	void addBot(std::string code);
	
	Process &getProcessToMove();

	bool ended();
	

	Instruction &instruction(int32_t index);

	uint32_t toIndex(int32_t index);
	
	
};
#endif //__COREWARSGAME_H__
