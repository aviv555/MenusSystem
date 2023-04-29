#pragma once
#include <iostream>
#include <map>
#include "ExecutableInterface.h"

class MenuItem : public ExecutableInterface
{
    // Members
private:
    std::string name;

public:
    // Constructor
    MenuItem(const std::string& name);

    // Methods
    std::string GetName() const;
    void SetName(const std::string& name);
    //bool Execute() const override;
};

