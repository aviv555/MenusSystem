#include "Operation2.h"

Operation2::Operation2(string name) : MenuItem(name) {}

void Operation2::Execute()  
{
	system("CLS");
	cout << "Operation 2 executed" << endl;
	cout << "Press any key to go back..." << endl;
	string a;
	cin >> a;
	this->GetPredacessor()->Execute();
}
