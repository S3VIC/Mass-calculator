#include <iostream>
#include "elements.h"
#include "interface.h"
using namespace std;

int main()
{
    char decision;
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
        cout << "\n Want to go back to main menu? y/n ";
        dec:
        cin >> decision;
        if(decision == 'y') goto start;
        else if(decision == 'n') exit(0);
        else
        {
        cout << "Wrong given value. Press ENTER to back to the last step.";
        cin.get();
        goto dec;
        }
    }
else if(i.getchoice() == 2)
    {
        i.menu_2();
        cout << "\n Want to go back to main menu? y/n ";
        dec2:
        cin >> decision;
        if(decision == 'y') goto start;
        else if(decision == 'n') exit(0);
        else
        {
        cout << "Wrong given value. Press ENTER to back to the last step.";
        cin.get();
        goto dec2;
        }
    }
else if(i.getchoice() == 3)
    {
    system("CLS");
        cout << "\t\t\t\t\tMASS CALCULATOR BY S3VIC" << endl << "Program inspired by the personal interest as a nanostructures engineering in Chemistry.\nThe aim"
    " of this program is to make it easy to calculate total particle mass with significant precision and to get access to basic "
    "information about each particle included in periodic table of chemical elements in form of a basic console application "
    "which is planned to get upgraded to more advanced application in the near future.";
    cout << "\n Want to go back to main menu? y/n ";
    dec3:
    cin >> decision;
    if(decision == 'y') goto start;
    else if(decision == 'n') exit(0);
    else
    {
      cout << "Wrong given value. Press ENTER to back to the last step.";
      cin.get();
      goto dec3;
    }
    }
else if(i.getchoice() == 4) exit(0);

    return 0;
}
