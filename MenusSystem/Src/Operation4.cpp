#include "Operation4.h"

Operation4::Operation4(std::string name) : MenuItem(name) {}

bool Operation4::Execute() const
{
	system("CLS");
	std::cout << "Operation 4 executed" << std::endl;
	std::cout << "Press any key to go back..." << std::endl;
	std::string a;
	std::cin >> a;
	return true;
}
