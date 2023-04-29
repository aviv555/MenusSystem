#pragma once
#include <iostream>

class InputUtilityFunctions
{
public:
	static bool isInputNumber(const std::string& input);
	static bool isNumberInRange(int number, int lowerBound, int upperBound);
};

