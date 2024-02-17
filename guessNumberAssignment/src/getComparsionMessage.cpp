#include <string>
std::string getComparsionMessage(int comparsionResult) {
	switch (comparsionResult)
	{ case 1:
		return "Try a lesser one.\n";
		break;
	case -1:
		return "Try a greater one.\n";
		break;
	case 0:
		return "That's a correct number, you win!\n";
		break;
	default:
		break;
	}
}