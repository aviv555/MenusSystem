#include <iostream>
#include "MenuItem.h"
#include "SubMenu.h"
#include "Operation1.h"
#include "Operation2.h"
#include "Operation3.h"
#include "Operation4.h"
#include "GoBackOperation.h"


int main()
{
    // TEST
    
    SubMenu mainMenu = SubMenu("Main Menu");
    
    SubMenu SubMenu1 = SubMenu("SubMenu 1");
    SubMenu1.AddSubItem(new GoBackOperation("Go Back"));
    SubMenu1.AddSubItem(new Operation1("Operation 1"));
    SubMenu1.AddSubItem(new Operation2("Operation 2"));
    
    SubMenu SubMenu2 = SubMenu("SubMenu 2");
    SubMenu2.AddSubItem(new GoBackOperation("Go Back"));
    SubMenu2.AddSubItem(new Operation3("Operation 3"));
    SubMenu2.AddSubItem(new Operation4("Operation 4"));
    
    MenuItem* SubManu1Pointer = (MenuItem*)&SubMenu1;
    MenuItem* SubManu2Pointer = (MenuItem*)&SubMenu2;
    
    mainMenu.AddSubItem(new GoBackOperation("Go back"));
    mainMenu.AddSubItem(SubManu1Pointer);
    mainMenu.AddSubItem(SubManu2Pointer);
    mainMenu.Execute();
}