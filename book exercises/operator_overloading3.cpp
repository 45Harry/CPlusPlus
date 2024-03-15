// program to overload an increment operator (++) in prefix notation
#include <iostream>
using namespace std;
class Distance
{
    int meter;
    int centimeter;

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
    Distance operator++()
    {
        Distance d;
        d.meter = ++meter;
        d.centimeter = ++centimeter;
        if (d.centimeter >= 100)
        {
            ++d.meter;
            d.centimeter = d.centimeter - 100;
        }
        return d;
    }
    void display()
    {
        cout << meter << "m " << centimeter << "cm" << endl;
    }
};

int main()
{
    Distance D1(10, 99), FD;
    cout << "The original Distance is :";
    D1.display();
    FD = ++D1; // increment the D1 object first using operator functions
    cout << "The final distance is :";
    FD.display(); // Display the distance that is returned by operator function ++
    cout << "The distance of obj d1: ";
    D1.display();

    return 0;
}