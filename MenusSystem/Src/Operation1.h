#pragma once
#include "MenuItem.h"

class Operation1 : public MenuItem
{
public:
	const Operation1(string name);
	void Execute() override;
};

