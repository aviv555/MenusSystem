#pragma once
#include <iostream>

class InputUtilityFunctions
{
public:
	static bool isInputNumber(const std::string& input);
	static bool isNumberInRange(const int number, const int lowerBound, const int upperBound);
};

