#pragma once
#include <vector>
#include "MenuItem.h"

class SubMenu : MenuItem
{
	// Members
private:
	std::vector<MenuItem*> m_MenuItemList;
	bool isRunning;
	
public:
	// Constructor
	SubMenu(std::string name);

	// Methods
	bool GetIsRunning();
	void SetIsRunning(bool isRunning);
	void Show();
	void GetUserInput(int& userInputAsInteger);
	void AddSubItem(MenuItem* Item);
	bool Execute() override;
};

