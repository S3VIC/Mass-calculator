#include "interface.h"
#include<stdlib.h>
#include<windows.h>
#include "elements.h"
int Interface::getchoice()
{
    return choice;
}
void Interface::welcome_screen()
{
    cout << "*********************************************************************************************************" << endl
    << "\t\t\t\t  Welcome to Mass Calculator by S3VIC \n\t\t\t\t\t Press ENTER to continue"  << endl << "**************************************************"
    "*******************************************************";
}
void Interface::main_menu()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    cout << "***********************************************************************************************************************" << endl;
    cout << "\t\t\t\t\t\t\tMAIN MENU"
    "\n\n 1. Calculate particle mass. \n\n 2. Get element information. \n\n 3. About program. \n\n 4. Exit."

    "\n\n***********************************************************************************************************************";

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    cout << "\n\n \t\t\t\t\t       Choose option: ";
    cin >> choice;
}
void Interface::menu_1()
{
    int n;
        cout << "Give total number of elements in particle: ";
        cin >> n;
        cout << endl;
        Particle p(n);
    cout << p.particle_mass() << endl;
}
void Interface::menu_2()
{
    int a;
    cout << "Give atomic number: ";
    cin >> a;
    Element p1(a);
    p1.info_general();
    p1.load_info();
}
void Interface::menu_3()
{
     //system("CLS");
        cout << "\t\t\t\t\t  MASS CALCULATOR BY S3VIC" << endl << "Program inspired by the personal interest as a nanostructures"
    " engineering student in Chemistry. The aim of this program is to make it easy to calculate total particle mass with significant precision and to get access  to  basic "
    " information about each particle included in periodic table of chemical elements in form of a basic console application "
    "which is planned to get upgraded to more advanced application in the near future."
    "\n\t\t\t\t Information source: https://www.ptable.com/ ";
}
void Interface::exit_4()
{
    exit(0);
}
bool Interface::back_to_menu()
{
    char decision;
    cout << "\n Want to go back to main menu? y/n ";
    while(true)
    {
    cin >> decision;
    if(decision == 'y') return true;
    else if (decision == 'n') return false;
    else continue;
    }


}
void Interface::interface_clear()
{
    system("CLS");
}
