#include "GoBackOperation.h"

GoBackOperation::GoBackOperation(std::string name) : MenuItem(name) {}

bool GoBackOperation::Execute() const
{
	return false;
}
