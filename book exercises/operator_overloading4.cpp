// program to overload an increment operator in postfix notaiton
#include <iostream>
using namespace std;
class Distance
{
    int meter, centimeter;

public:
    Distance(int m, int cm)
    {
        meter = m;
        centimeter = cm;
    }
    Distance()
    {
        meter = 0;
        centimeter = 0;
    }
    Distance operator++(int)
    {
        Distance d;
        d.meter = meter++;
        d.centimeter = centimeter++;
        if (d.centimeter >= 100)
        {
            d.meter++;
            d.centimeter = d.centimeter - 100;
        }
        return d;
    }
    void display()
    {
        cout << meter << "m " << centimeter << "cm";
    }
};

int main()
{
    Distance D(10, 99), D2;
    cout << "Values before incremtnt operator: ";
    D.display();
    D2 = D++; // same as d.addDistance
    cout << "\nValues after incremtnt operator: ";
    D2.display();
    cout << "\nvalude of D object ";
    D.display();

    return 0;
}