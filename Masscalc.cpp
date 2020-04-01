#include <iostream>

using namespace std;
#include "declarations.h"


int main()
{
typedef int element;
element atomic_number;
interface_begin();
    start:
    cin >> atomic_number;
    cout << "\n\n chosen element : ";
choice(atomic_number);
    if(atomic_number>11 || atomic_number<1) goto start;
interface_end();
return 0;
}
