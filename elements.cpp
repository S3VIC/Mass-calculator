#include "elements.h"

Element::Element(int aa)
{
    a = aa;
}
void Element::info_general()
{
    switch(a)
    {
    case 1:
        name = "Hydrogen";
        z = 1.008 ;
        break;
    case 2:
        name = "Hellium";
        z=4,0026;
        break;
    case 3:
        name = "Lithium";
        z = 6.94;
        break;
    case 4:
        name = "Beryllium";
        z = 9.0122;
        break;
    case 5:
        name = "Boron";
        z = 10.81;
        break;
    case 6:
        name = "Carbon";
        z = 12.011;
        break;
    case 7:
        name = "Nitrogen";
        z = 14.007;
        break;
    case 8:
        name = "Oxygen";
        z = 15.999;
        break;
    case 9:
        name = "Fluorine";
        z = 18.998;
        break;
    case 10:
        name = "Neon";
        z = 20.180;
        break;
    case 11:
        name = "Sodium";
        z = 22.990;
        break;
    case 12:
        name = "Magnesium";
        z = 24.305;
        break;
    case 13:
        name = "Aluminium";
        z = 26.982;
        break;
    case 14:
        name = "Silicon";
        z = 28.085;
        break;
    case 15:
        name = "Phosphorus";
        z = 30.974;
        break;
    case 16:
        name = "Sulfur";
        z = 32.06;
        break;
    case 17:
        name = "Chlorine";
        z = 35.45;
        break;
    case 18:
        name = "Argon";
        z = 39.948;
        break;
    case 19:
        name = "Potassium";
        z = 39.098;
        break;
    case 20:
        name = "Calcium";
        z = 40.078;
        break;
    case 21:
        name = "Scandium";
        z = 44.956;
        break;
    case 22:
        name = "Titanium";
        z = 47.867;
        break;
    case 23:
        name = "Vanadium";
        z = 50.942;
        break;
    case 24:
        name = "Chromium";
        z = 51.996;
        break;
    case 25:
        name = "Manganese";
        z = 54.938;
        break;
    case 26:
        name = "Iron";
        z = 55.845;
        break;
    case 27:
        name = "Cobalt";
        z = 58.933;
        break;
    case 28:
        name = "Nickel";
        z = 58.693;
        break;
    case 29:
        name = "Copper";
        z = 63.546;
        break;
    case 30:
        name = "Zinc";
        z = 65.38;
        break;
    case 31:
        name = "Gallium";
        z = 69.723;
        break;
    case 32:
        name = "Germanium";
        z = 72.630;
        break;
    case 33:
        name = "Arsenic";
        z = 74.922;
        break;
    case 34:
        name = "Selenium";
        z = 78.971;
        break;
    case 35:
        name = "Bromine";
        z = 79.904;
        break;
    case 36:
        name = "Krypton";
        z = 83.798;
        break;
    case 37:
        name = "Rubidium";
        z = 85.468;
        break;
    case 38:
        name = "Strontium";
        z = 87.62;
        break;
    case 39:
        name = "Yttrium";
        z = 88.906;
        break;
    case 40:
        name = "Zirconium";
        z = 91.224;
        break;
    case 41:
        name = "Niobium";
        z = 92.906;
        break;
    case 42:
        name = "Molybdenur";
        z = 95.95;
        break;
    case 43:
        name = "Technetium";
        z = 98;
        break;
    case 44:
        name = "Ruthenium";
        z = 101.07;
        break;
    case 45:
        name = "Rhodium";
        z = 102.91;
        break;
    case 46:
        name = "Palladium";
        z = 106.42;
        break;
    case 47:
        name = "Silver";
        z = 107.87;
        break;
    case 48:
        name = "Cadmium";
        z = 112.41;
        break;
    case 49:
        name = "Indium";
        z = 114.82;
        break;
    case 50:
        name = "Tin";
        z = 118.71;
        break;
    case 51:
        name = "Antimony";
        z = 121.76;
        break;
    case 52:
        name = "Tellurium";
        z = 127.60;
        break;
    case 53:
        name = "Iodine";
        z = 126.90;
        break;
    case 54:
        name = "Xenon";
        z = 131.29;
        break;
    case 55:
        name = "Caesium";
        z = 132.91;
        break;
   /* case 56:
        name = "";
        z = ;
        break;
    case 57:
        name = "";
        z = ;
        break;
    case 58:
        name = "";
        z = ;
        break;
    case 59:
        name = "";
        z = ;
        break;
    case 60:
        name = "";
        z = ;
        break;
    case 61:
        name = "";
        z = ;
        break;
    case 62:
        name = "";
        z = ;
        break;
    case 63:
        name = "";
        z = ;
        break;
    case 64:
        name = "";
        z = ;
        break;
    case 65:
        name = "";
        z = ;
        break;
    case 66:
        name = "";
        z = ;
        break;
    case 67:
        name = "";
        z = ;
        break;
    case 68:
        name = "";
        z = ;
        break;
    case 69:
        name = "";
        z = ;
        break;
    case 70:
        name = "";
        z = ;
        break;
    case 71:
        name = "";
        z = ;
        break;
    case 72:
        name = "";
        z = ;
        break;
    case 73:
        name = "";
        z = ;
        break;
    case 74:
        name = "";
        z = ;
        break;
        name = "";
        z = ;
        break;
    case 75:
        name = "";
        z = ;
        break;
        name = "";
        z = ;
        break;
    case 76:
        name = "";
        z = ;
        break;
    case 77:
        name = "";
        z = ;
        break;
        name = "";
        z = ;
        break;
    case 78:
        name = "";
        z = ;
        break;
        name = "";
        z = ;
        break;
    case 79:
        name = "";
        z = ;
        break;
    case 80:
        name = "";
        z = ;
        break;
    case 81:
        name = "";
        z = ;
        break;
    case 82:
        name = "";
        z = ;
        break;
    case 83:
    case 84:
        name = "";
        z = ;
        break;
    case 85:
        name = "";
        z = ;
        break;
    case 86:
        name = "";
        z = ;
        break;
    case 87:
        name = "";
        z = ;
        break;
    case 88:
        name = "";
        z = ;
        break;
    case 89:
        name = "";
        z = ;
        break;
    case 90:
        name = "";
        z = ;
        break;
    case 91:
        name = "";
        z = ;
        break;
    case 92:
        name = "";
        z = ;
        break;
    case 93:
        name = "";
        z = ;
        break;
    case 94:
        name = "";
        z = ;
        break;
    case 95:
        name = "";
        z = ;
        break;
    case 96:
        name = "";
        z = ;
        break;
    case 97:
        name = "";
        z = ;
        break;
    case 98:
        name = "";
        z = ;
        break;
    case 99:
        name = "";
        z = ;
        break;
    case 100:
        name = "";
        z = ;
        break;
    case 101:
        name = "";
        z = ;
        break;
    case 102:
        name = "";
        z = ;
        break;
    case 103:
        name = "";
        z = ;
        break;
    case 104:
        name = "";
        z = ;
        break;
    case 105:
        name = "";
        z = ;
        break;
    case 106:
        name = "";
        z = ;
        break;
    case 107:
        name = "";
        z = ;
        break;
    case 108:
        name = "";
        z = ;
        break;
    case 109:
        name = "";
        z = ;
        break;
    case 110:
        name = "";
        z = ;
        break;
    case 111:
        name = "";
        z = ;
        break;
    case 112:
        name = "";
        z = ;
        break;
    case 113:
        name = "";
        z = ;
        break;
    case 114:
        name = "";
        z = ;
        break;
    case 115:
        name = "";
        z = ;
        break;
    case 116:
        name = "";
        z = ;
        break;
    case 117:
        name = "";
        z = ;
        break;
*/
        default :
            cout << "Invalid number given! Try again." << endl;
            exit(0);
            break;
    }
}
void Element::info_type()
{
    switch(a)
    {
    case 3: type = "metal"; break;
    case 4: type = "metal"; break;
    case 11: type = "metal"; break;
    case 12: type = "metal"; break;
    case 13: type = "metal"; break;
    case 19: type = "metal"; break;
    case 20: type = "metal"; break;
    case 21: type = "metal"; break;
    case 22: type = "metal"; break;
    case 23: type = "metal"; break;
    case 24: type = "metal"; break;
    case 25: type = "metal"; break;
    case 26: type = "metal"; break;
    case 27: type = "metal"; break;
    case 28: type = "metal"; break;
    case 29: type = "metal"; break;
    case 30: type = "metal"; break;
    case 31: type = "metal"; break;
    case 37: type = "metal"; break;
    case 38: type = "metal"; break;
    case 39: type = "metal"; break;
    case 40: type = "metal"; break;
    case 41: type = "metal"; break;
    case 42: type = "metal"; break;
    case 43: type = "metal"; break;
    case 44: type = "metal"; break;
    case 45: type = "metal"; break;
    case 46: type = "metal"; break;
    case 47: type = "metal"; break;
    case 48: type = "metal"; break;
    case 49: type = "metal"; break;
    case 50:type = "metal"; break;
    case 55:
    case 56:
    case 57:
    case 58:
    default:
        cout << "Invalid given number! Try again.";
         break;
    }

}
void Element:: load_info()
{
    cout << endl << "Name: " << name << endl;
    cout << "Atomic number: " << a << endl;
    cout << "Mass number: " << z << endl;
    cout << "Type: " << type << endl;

}
