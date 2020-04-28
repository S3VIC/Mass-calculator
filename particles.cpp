#include "elements.h"
#include<vector>
#include<stdlib.h>
Particle::Particle(int nn)
{
    n = nn;
}
double Particle::particle_mass()
{
    int aa,m;
    double mass = 0;
     vector <int> v;
    vector <string> s;

while(true){
    beginning:
   cout << n << " Atoms left" << endl;

    if(n<0)
    {
        cout << "Too big number chosen, try again." << endl;
        goto beginning;
    }


    if(n == 0)
    {
     if(v.size()!=0)
     {
         system("CLS");
         cout << "In created particle there are: " << endl;
         for(int i=0;i<v.size();i++)
         {
               cout << v[i] << " " << s[i] << " atoms" << endl;
         }
        return mass;
     }
     else
         {
             cout << "No chosen elements!" << endl;
             return 0;
         }
    }
    cout << "How many chosen elements there are in  a particle? \n m = ";
    cin >> m;
    cout << "Give atomic number of chosen element: ";
    cin >> aa;
    Element e(aa);
    e.info_general();

    mass += n * e.z;

    v.push_back(m);
    s.push_back(e.name);
    n -= m;

}
}
