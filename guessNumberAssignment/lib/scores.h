#include <string>
#include <vector>

const std::string scoresFileName = "high_scores.txt";

void saveScore(std::string& name, int score);
std::vector<std::vector<std::string>> loadScore(const std::string &scoreFileName);
void viewScore(std::vector<std::vector<std::string>>& scoreTable);