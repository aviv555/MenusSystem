#pragma once
#include <iostream>
#include <map>
#include "MenuItem.h"
using namespace std;

class MainMenu : public MenuItem
{
    // members
private:
    map<int, MenuItem*> m_MenuItemList;
    const string m_Name;
    int m_ItemCount;

public:
    // Constructor
    MainMenu(string string);

    // Methods
    void GetUserInput(int& userInputAsInteger) const;
    void AddSubItem(MenuItem* Item);
    void Show();
    void Execute();
};

