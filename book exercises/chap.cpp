#include <iostream>
using namespace std;
enum Boolean
{
    false, true;
};
class Distance
{
    int feet, inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int ft, int inc)
    {
        feet = ft;
        inches = inc;
    }
    void display()
    {
        cout << feet << "\'" << inches << '\"';
    }
    void readData()
    {
        cout << "Feet: ";
        cin >> feet;
        cout << "Inches: ";
        cin >> inches;
    }
    Boolean operator<(Distance dist)
    {
        float f1 = feet + (inches / 12);
        float f2 = dist.feet + (dist.inches / 12);
        return ((f1 < f2)) ? true : false; // compars the two distances
    }
};
int main()
{
    Distance d1, d2;
    cout << "Enter first Distance :" << endl;
    d1.readData();
    cout << "Enter second Distance :" << endl;
    d2.readData();
    cout << "\nFirst Distance in feet & inch=";
    d1.display();
    cout << "\nSecond Distance in feet & inch=";
    d2.display();
    if (d1 < d2)
    {
        cout << "\nFirst Distance is less than second Distance ";
    }
    else
    {
        cout << "\nThe first Distance is More than the second";
    }
}