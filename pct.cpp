#include "statFunctions.h"
#include <algorithm>
#include <string>

Quantile::Quantile(unsigned short probability) : _q{ probability } {}

void Quantile::update(double next) {
	_mySequence.push_back(next);
}

double Quantile::getValue() const {
	std::vector<double> sortedSequence = _mySequence;
	std::sort(sortedSequence.begin(), sortedSequence.end());
	size_t k = ceilf(_q / static_cast<double>(100) * sortedSequence.size());
	return sortedSequence[k-1];
}

const char* Quantile::getName() const {
	return "pct";
}