#include "SubMenu.h"
#include "InputUtilityFunctions.h"
#include <string>

SubMenu::SubMenu(std::string name) : MenuItem(name), isRunning(false) {}

bool SubMenu::GetIsRunning()
{
    return this->isRunning;
}

void SubMenu::SetIsRunning(bool isRunning)
{
    this->isRunning = isRunning;
}

void SubMenu::Show()
{
    system("CLS");
    std::cout << "** " << this->GetName() << " **" << std::endl;
    std::cout << "------------------" << std::endl;
    
    for (int i = 0; i < this->m_MenuItemList.size(); i++)
    {
        std::cout << i << " -> " << this->m_MenuItemList[i]->GetName() << std::endl;
    }

    std::cout << "------------------" << std::endl;
    std::cout << "Enter your request ";
}

void SubMenu::GetUserInput(int& userInputAsInteger)
{
    while (true)
    {
        std::string input;
        std::cin >> input;

        if (!InputUtilityFunctions::isInputNumber(input))
        {
            std::cout << "the input has to be a number! pls try again" << std::endl;
            continue;
        }

        userInputAsInteger = stoi(input);
        int lowerBound = 0;
        int uperBound = this->m_MenuItemList.size() - 1;

        if (!InputUtilityFunctions::isNumberInRange(userInputAsInteger, lowerBound, uperBound))
        {
            std::cout << "The number you entered is not in range! pls try again" << std::endl;
            continue;
        }

        return;
    }
}

void SubMenu::AddSubItem(MenuItem* item)
{
	this->m_MenuItemList.push_back(item);
}

bool SubMenu::Execute()
{   
    this->isRunning = true;

    while (isRunning)
    {
        Show();
        int userChoiceAsInteger;
        GetUserInput(userChoiceAsInteger);
        isRunning = this->m_MenuItemList[userChoiceAsInteger]->Execute();
    }
    return true;
}
