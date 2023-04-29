#pragma once
#include <vector>
#include "MenuItem.h"

class SubMenu : public MenuItem
{
	// Members
private:
	std::vector<std::shared_ptr<MenuItem>> m_MenuItemList;
	
public:
	// Constructor
	SubMenu(std::string name);

	// Methods
	void Show() const;
	void GetUserInput(int& userInputAsInteger) const;
	void AddSubItem(const MenuItem& Item);
	bool Execute() const override;
};

