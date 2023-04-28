#pragma once
#include <iostream>
#include <map>
#include "ExecutableInterface.h"
using namespace std;

class MenuItem : public ExecutableInterface
{
    // every component on the menu have reference to its predecessor
private:
    // why do i need a pointer ? ? ? ask alex!
    MenuItem* predecessor;
    string name;

public:
    MenuItem(string name);

    MenuItem* GetPredacessor();
    void SetPredacessor(MenuItem* predecessor);

    string GetName() const;
    void SetName(string name);
    void Execute() override;
};

