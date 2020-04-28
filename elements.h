#include <iostream>

using namespace std;

class Element
{
    friend class Particle;
    int a;
    float z;
    string name,type,symbol;
public:
    Element(int aa);
     void info_general();
     void load_info();

};
class Particle
{
    int n;
public:
    Particle(int nn);
    double particle_mass();
};
