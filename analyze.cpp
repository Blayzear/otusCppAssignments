#include <iostream>
#include "statFunctions.h"

int main() {
	const size_t statistics_count = 6;
	IStatistics* statistics[statistics_count];

	statistics[0] = new Minimum{};
	statistics[1] = new Maximum{};
	statistics[2] = new Mean{};
	statistics[3] = new StandardDeviation{};
	statistics[4] = new Quantile{90};
	statistics[5] = new Quantile{95};

	double val = 0;
	while (std::cin >> val) {
		for (size_t i = 0; i < statistics_count; ++i) {
			statistics[i]->update(val);
		}
	}

	// Handle invalid input data
	if (!std::cin.eof() && !std::cin.good()) {
		std::cerr << "Invalid input data\n";
		return 1;
	}

	// Print results if any
	for (size_t i = 0; i < statistics_count; ++i) {
		std::cout << statistics[i]->getName() << " = " << statistics[i]->getValue() << std::endl;
	}

	// Clear memory - delete all objects created by new
	for (size_t i = 0; i < statistics_count; ++i) {
		delete statistics[i];
	}

	return 0;
}