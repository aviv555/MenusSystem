#include "MainMenu.h"
#include "InputUtilityFunctions.h"
#include <string>
#include <iostream>
#include <map>
#include <Windows.h>
using namespace std;

MainMenu::MainMenu(string name) : MenuItem(name)
{
	this->m_ItemCount = 0;
}

void MainMenu::GetUserInput(int& userChoiceAsInteger) const 
{
	while (true)
	{
		string input;
		cin >> input;

		if (!InputUtilityFunctions::isInputNumber(input))
		{
			cout << "the input has to be a number! pls try again" << endl;
			continue;
		}

		userChoiceAsInteger = stoi(input);
		int lowerBound = 0;
		int uperBound = this->m_ItemCount;

		if (!InputUtilityFunctions::isNumberInRange(userChoiceAsInteger, lowerBound, uperBound))
		{
			cout << "The number you entered is not in range! pls try again" << endl;
			continue;
		}

		return;
	}
}

void MainMenu::AddSubItem(MenuItem* item)
{
	this->m_MenuItemList.emplace(this->m_ItemCount + 1, item);
	this->m_ItemCount++;
	item->SetPredacessor(this);
}

void MainMenu::Show()
{
	system("CLS");
	cout << "*** " << this->GetName() << " ***" << endl;
	cout << "------------------" << endl;
	for (int i = 0; i < this->m_MenuItemList.size(); i++)
	{
		cout << i + 1 << " -> " << this->m_MenuItemList[i + 1]->GetName() << endl;
	}

	cout << "0 -> exit" << endl;
	cout << "------------------" << endl;
	cout << "Enter your request ";

}

void MainMenu::Execute()
{
	Show();
	int userChoiceAsInteger;
	GetUserInput(userChoiceAsInteger);

	
	if (userChoiceAsInteger == 0)
	{
		cout << "Bye bye..." << endl;
		Sleep(2500);
		system("CLS");
	}

	else
	{
		this->m_MenuItemList[userChoiceAsInteger]->Execute();
	}
}
