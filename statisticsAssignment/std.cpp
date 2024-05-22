#include "statFunctions.h"

void StandardDeviation::update(double next) {
	_myMean.update(next);
	_mySequence.push_back(next);
}

double StandardDeviation::getValue() const {
	Mean dispersion;
	for (size_t i = 0; i < _mySequence.size(); i++) {
		dispersion.update(pow((_mySequence[i] - _myMean.getValue()), 2));
	}
	if (dispersion.getValue() < 0)
	{
		return 0.0f;
	}
	else
	{
		return sqrt(dispersion.getValue());
	}
}

const char* StandardDeviation::getName() const {
	return "std";
}