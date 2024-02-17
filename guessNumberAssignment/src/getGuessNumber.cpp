#include <cstdlib>
#include <ctime>
#include <iostream>

int getGuessNumber(int difficulty) {

	int limit;
	switch (difficulty) {
	case 1:
		limit = 10;
		break;
	case 2:
		limit = 50;
		break;
	case 3:
		limit = 100;
		break;
	default: 
		limit = 10;
		break;
	}

		std::srand(std::time(nullptr));
		return std::rand() % limit;
}