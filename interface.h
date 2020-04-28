#include<iostream>

using namespace std;


class Interface
{
    int choice;
    char decision;
public:
    int getchoice();
    void welcome_screen();
    void main_menu();
    void menu_1();
    void menu_2();
    void menu_3();
    void exit_4();
    bool back_to_menu();
    void interface_clear();
};
