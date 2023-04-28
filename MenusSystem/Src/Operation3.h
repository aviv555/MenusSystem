#pragma once
#include "MenuItem.h"

class Operation3 : public MenuItem
{
public:
	Operation3(string name);
	void Execute() override;
};

