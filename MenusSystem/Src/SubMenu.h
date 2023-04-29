#pragma once
#include <vector>
#include "MenuItem.h"

class SubMenu : MenuItem
{
	// Members
private:
	std::vector<MenuItem*> m_MenuItemList;
	
public:
	// Constructor
	SubMenu(std::string name);

	// Methods
	void Show() const;
	void GetUserInput(int& userInputAsInteger) const;
	void AddSubItem(MenuItem* Item);
	bool Execute() const override;
};

