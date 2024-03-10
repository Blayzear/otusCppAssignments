#include "statFunctions.h"

Minimum::Minimum() : _myValue{ std::numeric_limits<double>::min() } {}

void Minimum::update(double next) {
	if (next < _myValue) {
		_myValue = next;
	}
}

double Minimum::getValue() const {
	return _myValue;
}

const char* Minimum::getName() const {
	return "min";
}