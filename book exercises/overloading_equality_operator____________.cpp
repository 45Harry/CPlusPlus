// program to overload equality operatot
#include <iostream>
using namespace std;

Bool false = 0;
Bool true = 1;
class Distance
{
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int ft, int inc)
    {
        feet = ft;
        inch = inc;
    }
    void Display()
    {
        cout << feet "\'" << inch << "\"";
    }
    void readDistance()
    {
        cout << "Feet:";
        cin >> feet;
        cout << "INch:";
        cin >> inch;
    }
    Boolean operator==(Distance dist)
    {
        if (dist.feet == feet && dist.inch == inch)
        {
            return true;
            else return false;
        }
    }
};

int main()
{
    Distance d1, d2;
    cout << "Enter First Distance: " << endl;
    d1.readDistance();
    cout << "Enter Second Distance: " << endl;
    d2.readDistance();
    cout << "\nFirst Distance is :";
    d1.Display();
    cout << "\nSecond Distance is :";
    d2.Display();
    if (d1 == d2)
    {
        cout << "\nTwo distance are equal";
    }
    else
        cout << "\nThey are not equal:(";

    return 0;
}