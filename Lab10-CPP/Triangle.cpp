include <string>
#include "Dot.h"
using namespace std;
class Triangle
{
public:
    Triangle(Dot& dot1, Dot& dot2, Dot& dot3) : d1(dot1), d2(dot2), d3(dot3)
    {}
    // Do not use destructor: dots will delete with Triangle class automatically
private:
    // Automatically creating 3 class DOT examples - composition
    Dot& d1;
    Dot& d2;
    Dot& d3;
    //Not only links possible
    //Dot d1;
    //Dot d2;
    //Dot d3;
};

class TriangleAg
{
public:
    //Using pointers to access dot class - Agregation
    TriangleAg(Dot* dot1, Dot* dot2, Dot* dot3) : d1(dot1), d2(dot2), d3(dot3)
    {}
    // Using dot class to create new example of class - Agregation
    TriangleAg(Dot& dot1, Dot& dot2, Dot& dot3)
    {
        d1 = new Dot(dot1);
        d2 = new Dot(dot2);
        d3 = new Dot(dot3);

    }
    // We agreagate - we need to delete our class examples
    ~TriangleAg()
    {
        delete d1;
        delete d2;
        delete d3;
    }
private:
    //Agregation - using pointers
    Dot* d1;
    Dot* d2;
    Dot* d3;
};