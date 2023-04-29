#pragma once
#include "MenuItem.h"

class GoBackOperation : public MenuItem
{
public:
	GoBackOperation(std::string name);
	bool Execute() override;
};

