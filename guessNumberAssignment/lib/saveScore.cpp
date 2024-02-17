#include <vector>
#include <string>
#include "scores.h"
#include <fstream>

void saveScore(std::string &name, int score) {
	std::vector<std::vector<std::string>> scoreTable = loadScore(scoresFileName);
	bool saved = false, has_score = false;
	for (int i = 0; i < scoreTable.size(); i++) {
		if (scoreTable[i].at(0) == name) {
			has_score = true;
			if (atoi(scoreTable[i].at(1).c_str()) > score) {
				scoreTable[i].at(1) = std::to_string(score);
			}
			else
			{
				saved = true;
			}
			break;
		}
	}
	if (has_score && saved) return;
	if (!has_score) {
		scoreTable.push_back({ name, std::to_string(score) });
	}
	std::fstream scoreFile(scoresFileName, std::fstream::out | std::fstream::trunc);

	for (int i = 0; i < scoreTable.size(); i++) {
		for (int j = 0; j < scoreTable[i].size(); j++) {
			scoreFile << scoreTable[i].at(j) << ' ';
		}
		scoreFile << std::endl;
	}
	scoreFile.close();
}
