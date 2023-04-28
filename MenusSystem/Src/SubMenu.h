#pragma once
#include <iostream>
#include <map>
#include "MenuItem.h"

class SubMenu : MenuItem
{
private:
	map<int, MenuItem*> m_MenuItemList;
	int m_ItemCount;
	
public:
	SubMenu(string name);
	void Show();
	void GetUserInput(int& userInputAsInteger);
	void AddSubItem(MenuItem* Item);
	void Execute() override;
};

