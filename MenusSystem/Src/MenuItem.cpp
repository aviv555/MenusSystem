#include "MenuItem.h"

MenuItem::MenuItem(string name)
{
	this->name = name;
}

MenuItem* MenuItem::GetPredacessor() 
{
	return this->predecessor;
}

void MenuItem::SetPredacessor(MenuItem* predecessor)
{
	this->predecessor = predecessor;
}

string MenuItem::GetName() const 
{
	return this->name;
}

void MenuItem::SetName(string name)
{
	this->name = name;
}

void MenuItem::Execute() {}
