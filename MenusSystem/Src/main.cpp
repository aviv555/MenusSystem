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
    SubMenu1.AddSubItem(GoBackOperation("Go Back"));
    SubMenu1.AddSubItem(Operation1("Operation 1"));
    SubMenu1.AddSubItem(Operation2("Operation 2"));
    
    SubMenu SubMenu2 = SubMenu("SubMenu 2");
    SubMenu2.AddSubItem(GoBackOperation("Go Back"));
    SubMenu2.AddSubItem(Operation3("Operation 3"));
    SubMenu2.AddSubItem(Operation4("Operation 4"));
    
    mainMenu.AddSubItem(GoBackOperation("Go back"));
    mainMenu.AddSubItem(SubMenu1);
    mainMenu.AddSubItem(SubMenu2);
    mainMenu.Execute();
}