#include "Operation4.h"

Operation4::Operation4(string name) : MenuItem(name) {}

void Operation4::Execute() 
{
	system("CLS");
	cout << "Operation 4 executed" << endl;
	cout << "Press any key to go back..." << endl;
	string a;
	cin >> a;
	this->GetPredacessor()->Execute();
}
