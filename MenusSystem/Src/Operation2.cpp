#include "Operation2.h"

Operation2::Operation2(std::string name) : MenuItem(name) {}

bool Operation2::Execute() const
{
	system("CLS");
	std::cout << "Operation 2 executed" << std::endl;
	std::cout << "Press any key to go back..." << std::endl;
	std::string a;
	std::cin >> a;
	return true;
}
