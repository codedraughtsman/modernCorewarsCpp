#include "CorewarsGame.h"

#include "InstructionInterperter.h"
#include "DatInstruction.h"

CorewarsGame::CorewarsGame() : 
	m_numberOfInstructions(10) {

}

void CorewarsGame::setSize(uint32_t size) {
	m_numberOfInstructions = size;
}

void CorewarsGame::init(void) {
	m_instructions.clear();
	m_processes.clear();

	uint32_t botIndex=0;
	uint32_t botPlacementOffset = m_numberOfInstructions / m_bots.size();
	std::cout <<" botPlacementOffset " << botPlacementOffset 
		<< "  m_bots.size() " << m_bots.size()<< std::endl;

	for ( uint32_t i=0; i< m_numberOfInstructions; i ++) {
		std::cout << "init for loop " << i <<std::endl;
		if ( 0== i%botPlacementOffset && botIndex < m_bots.size()) {
			std::cout << "placing bot" <<std::endl;
			m_processes.push_back(Process(i));

			std::vector<Instruction> bot = m_bots.at(botIndex);
			m_instructions.insert(m_instructions.end(), 
				bot.begin(), bot.end());
			std::cout << "bot size" <<bot.size() <<std::endl;
			i+= bot.size() -1;
			botIndex ++;

			continue;
		}
		std::cout<< "adding dat instruction" << std::endl;
		m_instructions.push_back(Instruction("DAT"));
	}
	std::cout << "finished init"<< std::endl;
}

std::vector<Instruction> &CorewarsGame::instructions() {
	return m_instructions;
}

Instruction &CorewarsGame::instruction(int32_t index){
	
	return m_instructions.at(toIndex(index));
}


uint32_t CorewarsGame::toIndex(int32_t index) {
	index %= m_instructions.size();
	
	if (index < 0) {
		// index should be less than size due to the modulus.
		index += m_instructions.size();
	}
	return index;
}

void CorewarsGame::run(uint32_t nTurns, AbstractPrinter &printer) {	
	init();
	printer.message("starting game");
	printer.print(*this);
	for (uint32_t i=0; i<nTurns; i++ ) {
		for (Process &p : m_processes) {
			std::cout<<std::endl<< "turn: "<<i <<
				" process index: "<<p.index() <<std::endl;
			std::cout<<"running "<<m_instructions.at(p.index()) << std::endl;
			m_instructions.at(p.index()).execute(p, *this);
			printer.print(*this);
		/*if (isGameWon()) {
			printGameWon();
			return;		*/
		}

	}

}

void CorewarsGame::addBot(std::string botString) {
	std::vector<Instruction> instructions = stringToInstructions(botString);
	m_bots.push_back(instructions);
}
