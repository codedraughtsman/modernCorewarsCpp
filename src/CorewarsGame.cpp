#include "CorewarsGame.h"

CorewarsGame::CorewarsGame() : 
	m_numberOfInstructions(10) {

}

void CorewarsGame::setSize(uint32_t size) {
	m_numberOfInstructions = size;
}

void CorewarsGame::init(void) {
	m_instructions.clear();

	uint32_t botIndex=0;
	uint32_t botPlacementOffset = m_numberOfInstructions / m_bots.size();
	std::cout <<" botPlacementOffset " << botPlacementOffset 
		<< "  m_bots.size() " << m_bots.size()<< std::endl;

	for ( uint32_t i=0; i< m_numberOfInstructions; i ++) {
		if ( 0== i%botPlacementOffset && botIndex < m_bots.size()) {
			std::vector<Instruction> bot = m_bots.at(botIndex);
			m_instructions.insert(m_instructions.end(), 
				bot.begin(), bot.end());
			i+= bot.size() -1;
			botIndex ++;
			continue;
		}
		m_instructions.push_back(Instruction());
	}
}

std::vector<Instruction> &CorewarsGame::instructions() {
	return m_instructions;
}

void CorewarsGame::run(uint32_t nTurns, AbstractPrinter &printer) {	
	init();
	printer.message("starting game");
	printer.print(*this);
	for (uint32_t i=0; i<nTurns; i++ ) {
		//for each process
		/*if (isGameWon()) {
			printGameWon();
			return;		
		}
*/	
	}

}
std::vector<Instruction> stringToInstructions(std::string botString){
	std::vector<Instruction> bot;
	std::string delimiter = " ";
	std::string op = botString.substr(0, botString.find(delimiter));
	std::string A = botString.substr(botString.find(delimiter), 
						botString.find(","));
	std::string B = botString.substr( botString.find(","), botString.size());
	std::cout <<"adding '" << op<< "' '"<< A<< "' '"<<B <<"'"<<std::endl;
bot.push_back(Instruction(op, A, B ));

	return bot;
}
void CorewarsGame::addBot(std::string botString) {
	std::vector<Instruction> instructions = stringToInstructions(botString);
	m_bots.push_back(instructions);
}
