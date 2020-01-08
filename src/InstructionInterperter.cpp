#include "InstructionInterperter.h"

#include <set>
#include <sstream>

#include "Instruction.h"

//tokenises the string using the delimiters.
//if there are more than one delimiter sequentally then
//it only counts as one.
std::vector<std::string> tokeniser(std::string s) {
	std::set<char> delimiters = {'\t', ' ', ','};
	std::set<char> endchars = {';'}; //used for comments.
	std::string token;
	std::vector<std::string> output;
	for (char c : s) {
		if (endchars.count(c)) {
			break;
		}
		if (delimiters.count(c) ) {
			if (!token.empty()){
				output.push_back(token);
				token.clear();
			}
			continue;
		}
		token += c ;
	}

	if (!token.empty()) {
			output.push_back(token);
			token.clear();
	}

	return output;

}


inline std::string atWithDefault(std::vector<std::string> tokens,uint32_t index,
		 std::string def) {
	return tokens.size() >=index ? tokens.at(index) : def;
}

std::string toUpper(std::string input) {
	std::string output;
	for (char c : input) {
		output += toupper(c); 
	}
	return output;
}


Instruction lineToInstruction(std::string line) {
	std::vector<std::string> tokens = tokeniser(line);
	
	if (tokens.size() < 3){
		return Instruction(Instruction::INVALID);
	}

	std::string op = toUpper(tokens.at(0));	
	std::string a = tokens.at(1), b = tokens.at(2);
	return Instruction(op, a, b);
}

std::vector<Instruction> stringToInstructions(std::string botString){
	std::vector<Instruction> botInstructions;
	std::istringstream iss(botString);
	for (std::string line; std::getline(iss, line); ) {	
		Instruction instruct = lineToInstruction(line);
	
		if (instruct.is(Instruction::INVALID)) {
			continue;
		}

		botInstructions.push_back(instruct);
	}

	return botInstructions;
}