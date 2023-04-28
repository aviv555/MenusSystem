#pragma once
#include <iostream>
using namespace std;

class InputUtilityFunctions
{
public:
	static bool isInputNumber(string input);
	static bool isNumberInRange(int& number, int& lowerBound, int& upperBound);
};

