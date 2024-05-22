#include "statFunctions.h"

Maximum::Maximum() : _myValue{ std::numeric_limits<double>::min() } {}

void Maximum::update(double next) {
	if (next > _myValue || _myValue == std::numeric_limits<double>::min()) {
		_myValue = next;
	}
}

double Maximum::getValue() const {
	return _myValue;
}

const char* Maximum::getName() const {
	return "max";
}