#include "Operation3.h"

Operation3::Operation3(string name) : MenuItem(name) {}

void Operation3::Execute()  
{
	system("CLS");
	cout << "Operation 3 executed" << endl;
	cout << "Press any key to go back..." << endl;
	string a;
	cin >> a;
	this->GetPredacessor()->Execute();
}
