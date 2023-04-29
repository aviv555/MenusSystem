#pragma once
#include "MenuItem.h"

class Operation2 : public MenuItem
{
public:
	Operation2(std::string name);
	bool Execute() override;
};

