#include<iostream>
using namespace std;

#include "declarations.h"

void interface_begin()
{
  cout << "*************** \t Mass Calculator \t ***************" <<
  "\n\n\n" << " Type the atomic number A : ";
}
void interface_end()
{
  cout << "\n\n****************************************************************";
      cin.get();
}
void choice(int atn)
{
  switch(atn)
  {
  case 1:
      cout << "Hydrogen" << "\n Atomic number (A) = " << atn <<"\n Atomic mass : 1.008 "
      "\n\n";
      break;
  case 2:
      cout << "Helium" << "\n Atomic number (A) = " << atn << "\n Atomic mass : 4.0026"
      "\n\n";
      break;
  case 3:
      cout << "Lithium" << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z) : 6.94"
      "\n\n";
      break;
  case 4:
      cout << "Beryllium" << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z) : 9.012"
      "\n\n";
      break;
  case 5:
      cout << "Boron" << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z): 10.81"
      "\n\n";
      break;
  case 6:
      cout << "Carbon" << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z) : 12.011"
      "\n\n";
      break;
  case 7:
      cout << "Nitrogen" << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z) : 14.007"
      "\n\n";
      break;
  case 8:
      cout << "Oxygen" << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z) : 15.999"
      "\n\n";
      break;
  case 9:
      cout << "Fluorine" << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z) : 18.998"
      "\n\n";
      break;
  case 10:
      cout << "Neon" << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z) : 20.180"
      "\n\n";
      break;
  case 11:
      cout << "Sodium " << "\n Atomic number (A) = " << atn << "\n Atomic mass (Z) : 22.990"
      "\n\n";
      break;
  default:
      cout << "Given number is out of Periodic Table of Chemistry Elements range";
  }
}
