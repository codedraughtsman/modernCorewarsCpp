#include "CorewarsGame.h"

CorewarsGame::CorewarsGame() : m_size(10) {

}

void CorewarsGame::setSize(uint32_t size) {
	m_size = size;
}

void CorewarsGame::init(void) {
	m_instructions.clear();
	for ( uint32_t i=0; i< m_size; i ++) {
		m_instructions.push_back(Instruction());
	}
}

std::vector<Instruction> &CorewarsGame::instructions() {
	return m_instructions;
}
