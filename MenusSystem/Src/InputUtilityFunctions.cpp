#include "InputUtilityFunctions.h"

bool InputUtilityFunctions::isInputNumber(string input)
{
	std::string::const_iterator it = input.begin();
	while (it != input.end() && std::isdigit(*it)) it++;
	return !input.empty() && it == input.end();
}

bool InputUtilityFunctions::isNumberInRange(int& number, int& lowerBound, int& upperBound)
{
	return (number <= upperBound && number >= lowerBound);
}
