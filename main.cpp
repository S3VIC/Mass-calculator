#include <iostream>
#include "elements.h"
#include "interface.h"
using namespace std;

int main()
{
    bool decision = true;
    Interface i;
    i.welcome_screen();
    cin.get();
start:
    i.interface_clear();
    i.main_menu();
    if(i.getchoice()==1)
        {
    i.interface_clear();
    i.menu_1();
    decision = i.back_to_menu();
        if(decision == true) goto start;
        else exit(0);
        }
    else if(i.getchoice() == 2)
        {
        i.menu_2();
        decision = i.back_to_menu();
            if(decision == true) goto start;
            else exit(0);
        }
    else if(i.getchoice() == 3)
        {
        i.menu_3();
        decision = i.back_to_menu();
            if(decision == true) goto start;
            else exit(0);
        }
    else if(i.getchoice() == 4) i.exit_4();
        return 0;
}
