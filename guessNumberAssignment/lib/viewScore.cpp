#include <vector>
#include <string>
#include <iostream>

void viewScore(std::vector<std::vector<std::string>> &scoreTable) {
	std::cout << "\nTOP SCORES" << std::endl;
	for (int i = 0; i < scoreTable.size(); i++) {
		for (int j = 0; j < scoreTable[i].size(); j++) {
			std::cout << scoreTable[i].at(j) << " ";
		}
		std::cout << std::endl;
	}
}