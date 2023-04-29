#include "InputUtilityFunctions.h"

bool InputUtilityFunctions::isInputNumber(const std::string& input)  
{
	std::string::const_iterator it = input.begin();
	while (it != input.end() && std::isdigit(*it)) it++;
	return !input.empty() && it == input.end();
}

bool InputUtilityFunctions::isNumberInRange(const int number, const int lowerBound, const int upperBound)
{
	return (number <= upperBound && number >= lowerBound);
}
