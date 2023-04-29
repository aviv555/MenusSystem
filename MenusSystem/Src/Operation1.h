#pragma once
#include "MenuItem.h"

class Operation1 : public MenuItem
{
public:
	Operation1(std::string name);
	bool Execute() override;
};

