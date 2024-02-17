#include <vector>
#include <string>
#include <fstream>
#include <iostream>

std::vector<std::vector<std::string>> loadScore(const std::string &scoreFileName) {
	std::fstream scoreFile(scoreFileName, std::fstream::in);
	std::vector<std::vector<std::string>> scoreTable;
	std::string userName, score;
	while (scoreFile.rdstate() == 0) {
		scoreFile >> userName;
		scoreFile >> score;
		scoreFile.ignore();
		if (scoreFile.fail()) {
			break;
		}
		scoreTable.push_back({ userName, score });
	}
	return scoreTable;
}