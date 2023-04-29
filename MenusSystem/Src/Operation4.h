#pragma once
#include "MenuItem.h"

class Operation4 : public MenuItem
{
public:
	Operation4(std::string name);
	bool Execute() const override;
};

