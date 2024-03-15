// program to illustrate passing of two object in a member funciton
#include <iostream>
using namespace std;
class Distance
{
    int meter;
    int cm;

public:
    void getDistance()
    {
        cout << "Enter Meter: ";
        cin >> meter;
        cout << "Enter CM: ";
        cin >> cm;
    }
    Distance addDistance(Distance obj)
    {
        Distance d;
        d.meter = meter + obj.meter;
        d.cm = cm + obj.cm;
        return d;
    }
    void Display()
    {
        cout << "The FInal Distance is :" << meter << "m " << cm << "cm";
    }
};

int main()
{
    Distance DD, obj, obj2;
    obj.getDistance();
    obj2.getDistance();
    DD = obj.addDistance(obj2);
    DD.Display();

    return 0;
}