// program to add two given distandce using operator overloading
#include <iostream>
using namespace std;
class Distance
{
    int meter, centimeter;

public:
    Distance()
    {
        meter = 0;
        centimeter = 0;
    }
    Distance(int meter, int centimeter)
    {
        this->meter = meter;
        this->centimeter = centimeter;
    }
    Distance operator+(Distance d)
    {
        Distance DD;
        DD.meter = d.meter + meter;
        DD.centimeter = d.centimeter + centimeter;
        return DD;
    }
    void display()
    {
        cout << "The Final Distance is :" << meter << " " << centimeter << endl;
    }
};

int main()
{
    Distance D1(3, 4), D2(4, 3), FD;
    FD = D1 + D2;
    FD.display();

    return 0;
}