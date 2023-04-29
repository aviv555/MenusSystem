#pragma once
#include "MenuItem.h"

class Operation3 : public MenuItem
{
public:
	Operation3(std::string name);
	bool Execute() const override;
};

