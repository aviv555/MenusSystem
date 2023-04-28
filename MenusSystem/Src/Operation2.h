#pragma once
#include "MenuItem.h"

class Operation2 : public MenuItem
{
public:
	const Operation2(string name);
	void Execute() override;
};

