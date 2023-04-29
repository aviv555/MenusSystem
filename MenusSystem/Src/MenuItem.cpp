#include "MenuItem.h"

MenuItem::MenuItem(const std::string& name)
{
	this->name = name;
}


std::string MenuItem::GetName() const
{
	return this->name;
}

void MenuItem::SetName(const std::string& name)
{
	this->name = name;
}

//bool MenuItem::Execute() const
//{
//	return true;
//}
