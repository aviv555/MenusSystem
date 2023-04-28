#include "Operation1.h"

Operation1::Operation1(string name) : MenuItem(name) {}

void Operation1::Execute() 
{
	system("CLS");
	cout << "Operation 1 executed" << endl;
	cout << "Press any key to go back..." << endl;
	string a;
	cin >> a;
	this->GetPredacessor()->Execute();
}
