#include "Operation3.h"

Operation3::Operation3(std::string name) : MenuItem(name) {}

bool Operation3::Execute()  
{
	system("CLS");
	std::cout << "Operation 3 executed" << std::endl;
	std::cout << "Press any key to go back..." << std::endl;
	std::string a;
	std::cin >> a;
	return true;
}
