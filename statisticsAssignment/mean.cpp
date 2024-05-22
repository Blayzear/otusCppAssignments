#include "statFunctions.h"

Mean::Mean() : _mySum{ 0.0f }, _myCount{ 0 } {}

void Mean::update(double next) {
	_mySum += next;
	_myCount++;
}

double Mean::getValue() const {
	if (_myCount != 0) 
	{ 
		return (_mySum / _myCount);
	}
	else
	{
		return 0.0f;
	}
}

const char* Mean::getName() const {
	return "mean";
}