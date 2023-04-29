#include "Operation1.h"

Operation1::Operation1(std::string name) : MenuItem(name) {}

bool Operation1::Execute() const
{
	system("CLS");
	std::cout << "Operation 1 executed" << std::endl;
	std::cout << "Press any key to go back..." << std::endl;
	std::string a;
	std::cin >> a;
	return true;
}
