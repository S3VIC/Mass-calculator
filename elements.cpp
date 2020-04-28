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
        type = "metal";
        break;
    case 4:
        name = "Beryllium";
        z = 9.0122;
        type = "metal";
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
        type = "metal";
        name = "Sodium";
        z = 22.990;
        break;
    case 12:
        type = "metal";
        name = "Magnesium";
        z = 24.305;
        break;
    case 13:
        type = "metal";
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
        type = "metal";
        name = "Potassium";
        z = 39.098;
        break;
    case 20:
        type = "metal";
        name = "Calcium";
        z = 40.078;
        break;
    case 21:
        type = "metal";
        name = "Scandium";
        z = 44.956;
        break;
    case 22:
        type = "metal";
        name = "Titanium";
        z = 47.867;
        break;
    case 23:
        type = "metal";
        name = "Vanadium";
        z = 50.942;
        break;
    case 24:
        type = "metal";
        name = "Chromium";
        z = 51.996;
        break;
    case 25:
        type = "metal";
        name = "Manganese";
        z = 54.938;
        break;
    case 26:
        type = "metal";
        name = "Iron";
        z = 55.845;
        break;
    case 27:
        type = "metal";
        name = "Cobalt";
        z = 58.933;
        break;
    case 28:
        type = "metal";
        name = "Nickel";
        z = 58.693;
        break;
    case 29:
        type = "metal";
        name = "Copper";
        z = 63.546;
        break;
    case 30:
        type = "metal";
        name = "Zinc";
        z = 65.38;
        break;
    case 31:
        type = "metal";
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
        type = "metal";
        name = "Rubidium";
        z = 85.468;
        break;
    case 38:
        type = "metal";
        name = "Strontium";
        z = 87.62;
        break;
    case 39:
        type = "metal";
        name = "Yttrium";
        z = 88.906;
        break;
    case 40:
        type = "metal";
        name = "Zirconium";
        z = 91.224;
        break;
    case 41:
        type = "metal";
        name = "Niobium";
        z = 92.906;
        break;
    case 42:
        type = "metal";
        name = "Molybdenur";
        z = 95.95;
        break;
    case 43:
        type = "metal";
        name = "Technetium";
        z = 98;
        break;
    case 44:
        type = "metal";
        name = "Ruthenium";
        z = 101.07;
        break;
    case 45:
        type = "metal";
        name = "Rhodium";
        z = 102.91;
        break;
    case 46:
        type = "metal";
        name = "Palladium";
        z = 106.42;
        break;
    case 47:
        type = "metal";
        name = "Silver";
        z = 107.87;
        break;
    case 48:
        type = "metal";
        name = "Cadmium";
        z = 112.41;
        break;
    case 49:
        type = "metal";
        name = "Indium";
        z = 114.82;
        break;
    case 50:
        type = "metal";
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
        type = "metal";
        name = "Caesium";
        z = 132.91;
        break;
    case 56:
        type = "metal";
        name = "Barium";
        z = 137.33;
        break;
    case 57:
        type = "metal";
        name = "Lanthanum";
        z = 138.91;
        break;
    case 58:
        type = "metal";
        name = "Cerium";
        z = 140.12;
        break;
    case 59:
        type = "metal";
        name = "Praseodymi";
        z = 140.91;
        break;
    case 60:
        type = "metal";
        name = "Neodymium";
        z = 144.24;
        break;
    case 61:
        type = "metal";
        name = "Promethium";
        z = 145.;
        break;
    case 62:
        type = "metal";
        name = "Samarium";
        z = 150.36;
        break;
    case 63:
        type = "metal";
        name = "Europium";
        z = 151.96;
        break;
    case 64:
        type = "metal";
        name = "Gadolinium";
        z = 157.25;
        break;
    case 65:
        type = "metal";
        name = "Terbium";
        z = 158.93;
        break;
    case 66:
        type = "metal";
        name = "Dysprosium";
        z = 162.50;
        break;
    case 67:
        type = "metal";
        name = "Holmium";
        z = 164.93;
        break;
    case 68:
        type = "metal";
        name = "Erbium";
        z = 167.26;
        break;
    case 69:
        type = "metal";
        name = "Thulium";
        z = 168.93;
        break;
    case 70:
        type = "metal";
        name = "Ytterbium";
        z = 173.05;
        break;
    case 71:
        type = "metal";
        name = "Lutetium";
        z = 174.97;
        break;
    case 72:
        type = "metal";
        name = "Hafnium";
        z = 178.49;
        break;
    case 73:
        type = "metal";
        name = "Tantalum";
        z = 180.95;
        break;
    case 74:
        type = "metal";
        name = "Tungsten";
        z = 183.84;
        break;
    case 75:
        type = "metal";
        name = "Rhenium";
        z = 186.21;
        break;
    case 76:
        type = "metal";
        name = "Osmium";
        z = 190.23;
        break;
    case 77:
        type = "metal";
        name = "Iridium";
        z = 192.22;
        break;
    case 78:
        type = "metal";
        name = "Platinum";
        z = 195.08;
        break;
    case 79:
        type = "metal";
        name = "Gold";
        z = 196.97;
        break;
    case 80:
        type = "metal";
        name = "Mercury";
        z = 200.59;
        break;
    case 81:
        type = "metal";
        name = "Thallium";
        z = 204.38;
        break;
    case 82:
        type = "metal";
        name = "Lead";
        z = 207.2;
        break;
    case 83:
        type = "metal";
        name = "Bismuth";
        z = 208.98;
        break;
    case 84:
        type = "metal";
        name = "Polonium";
        z = 209.;
        break;
    case 85:
        name = "Astatine";
        z = 210.;
        break;
    case 86:
        name = "Radon";
        z = 222.;
        break;
    case 87:
        type = "metal";
        name = "Francium";
        z = 223;
        break;
    case 88:
        type = "metal";
        name = "Radium";
        z = 226;
        break;
    case 89:
        type = "metal";
        name = "Actinium";
        z = 227.;
        break;
    case 90:
        type = "metal";
        name = "Thorium";
        z = 232.04;
        break;
    case 91:
        type = "metal";
        name = "Protactinium";
        z = 231.04;
        break;
    case 92:
        type = "metal";
        name = "Uranium";
        z = 238.03;
        break;
    case 93:
        type = "metal";
        name = "Neptinium";
        z = 237.;
        break;
    case 94:
        type = "metal";
        name = "Plutonium";
        z = 244.;
        break;
    case 95:
        type = "metal";
        name = "Americium";
        z = 243.;
        break;
    case 96:
        type = "metal";
        name = "Curium";
        z = 247.;
        break;
    case 97:
        type = "metal";
        name = "Berkelium";
        z = 247.;
        break;
    case 98:
        type = "metal";
        name = "Californium";
        z = 251;
        break;
    case 99:
        type = "metal";
        name = "Einsteinium";
        z = 252.;
        break;
    case 100:
        type = "metal";
        name = "Fermium";
        z = 257.;
        break;
    case 101:
        type = "metal";
        name = "Mendeleviur";
        z = 258.;
        break;
    case 102:
        type = "metal";
        name = "Nobelium";
        z = 259.;
        break;
    case 103:
        type = "metal";
        name = "Lawrencium";
        z = 266.;
        break;
    case 104:
        type = "metal";
        name = "Rutherfordium";
        z = 267.;
        break;
    case 105:
        type = "metal";
        name = "Dubnium";
        z = 268.;
        break;
    case 106:
        type = "metal";
        name = "Seaborgium";
        z = 269.;
        break;
    case 107:
        type = "metal";
        name = "Bohrium";
        z = 270.;
        break;
    case 108:
        type = "metal";
        name = "Hassium";
        z = 270.;
        break;
    case 109:
        type = "metal";
        name = "Meitnerium";
        z = 278.;
        break;
    case 110:
        type = "metal";
        name = "Darmstadtium";
        z = 281.;
        break;
    case 111:
        type = "metal";
        name = "Roentgenium";
        z = 282.;
        break;
    case 112:
        type = "metal";
        name = "Copernicium";
        z = 285.;
        break;
    case 113:
        type = "metal";
        name = "Nihonium";
        z = 286.;
        break;
    case 114:
        type = "metal";
        name = "Flerovium";
        z = 289.;
        break;
    case 115:
        type = "-";
        name = "Moscovium";
        z = 290.;
        break;
    case 116:
        type = "-";
        name = "Livermorium";
        z = 293.;
        break;
    case 117:
        type = "-";
        name = "Tennesine";
        z = 294.;
        break;
    case 118:
        type = "-";
        name = "Oganessum";
        z = 294.;
        break;
        default :
            cout << "Invalid number given! Try again." << endl;
            exit(0);
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
