#include "SubMenu.h"
#include "InputUtilityFunctions.h"
#include <string>

SubMenu::SubMenu(string name) : MenuItem(name) 
{
    this->m_ItemCount = 0;
}

void SubMenu::Show()
{
    system("CLS");
    cout << "** " << this->GetName() << " **" << endl;
    cout << "------------------" << endl;
    for (int i = 0; i < this->m_MenuItemList.size(); i++)
    {
        cout << i + 1 << " -> " << this->m_MenuItemList[i]->GetName() << endl;
    }

    cout << "0 -> exit" << endl;
    cout << "------------------" << endl;
    cout << "Enter your request ";
}

void SubMenu::GetUserInput(int& userInputAsInteger)
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

        userInputAsInteger = stoi(input);
        int lowerBound = 0;
        int uperBound = this->m_ItemCount;

        if (!InputUtilityFunctions::isNumberInRange(userInputAsInteger, lowerBound, uperBound))
        {
            cout << "The number you entered is not in range! pls try again" << endl;
            continue;
        }

        return;
    }
}

void SubMenu::AddSubItem(MenuItem* item)
{
	this->m_MenuItemList.emplace(this->m_ItemCount, item);
	this->m_ItemCount++;
	item->SetPredacessor(this);
}

void SubMenu::Execute()
{
    
    Show();
    int userChoiceAsInteger;
    GetUserInput(userChoiceAsInteger);

    if (userChoiceAsInteger == 0)
    {
        system("CLS");
        this->GetPredacessor()->Execute();
    }
    else
    {
        this->m_MenuItemList[userChoiceAsInteger - 1]->Execute();
    }
}
