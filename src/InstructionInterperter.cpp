#include "InstructionInterperter.h"



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