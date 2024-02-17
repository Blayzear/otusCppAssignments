#include "scores.h"
#include "getGuessNumber.h"
#include "getComparsionMessage.h"
#include "compare.h"
#include <string>
#include <vector>
#include <iostream>


int main(int argc, char** argv) {
	int myNumber, difficulty = 1;
	bool shutdown = false;
	char staff;
	std::string commandlineArg;
	std::vector<std::vector<std::string>> scoreTable;
	for (int i = 1; i < argc; i++) {
		commandlineArg = argv[i];
		if (commandlineArg == "-table") {
			scoreTable = loadScore(scoresFileName);
			viewScore(scoreTable);
			std::cout << "Press any key to exit...\n";
			std::cin >> staff;
			shutdown = true;
			break;
		}
		if (commandlineArg == "-level") {
			difficulty = atoi(argv[i + 1]);
			if (difficulty < 1 || difficulty > 3) {
				std::cout << "Difficulty level passed, but can`t be processed. Default level (1) is set.\n";
				difficulty = 1;
			}
		}
	}
		if (shutdown == true) return 0;
		std::string userName;
		std::cout << "Please, enter your name " << std::endl;
		std::cin >> userName;
		myNumber = getGuessNumber(difficulty);
		std::cout << "I guessed a number, make your attempt" << std::endl;
		int comparsionResult = 1;
		int score = 0;
		std::string userInput;
		int userGuess;
		while (!(comparsionResult == 0)) {
			std::cin >> userInput;
			try { userGuess = std::stoi(userInput); }
			catch(std::invalid_argument) { 
				std::cout << "Invalid number!";
				return 1;
			}
			catch(std::out_of_range) { 
				std::cout << "Number out of range!";
				return 2;
			}
			score++;
			comparsionResult = compare(userGuess, myNumber);
			std::cout << getComparsionMessage(comparsionResult);
			
		}
		saveScore(userName, score);
		scoreTable = loadScore(scoresFileName);
		viewScore(scoreTable);
		std::cin >> staff;
		return 0;
}