#include <iostream>

using namespace std;
class Distance
{
private:
    float feet, inch;

public:
 Distance()
    { // default constructor
        feet = 5;
        inch = 6;
    }
    Distance(float a, float b)
    { // parametarized contructor
        feet = a;
        inch = b;
    }
    void showdata()
    {
        cout << feet << "' " << inch << "\"";
    }
    friend Distance add(Distance a, Distance b);
};
Distance add(Distance a, Distance b)
{
    Distance td;
    td.feet = a.feet + b.feet;
    td.inch = a.inch + b.inch;
    if (td.inch >= 12)
    {
        td.feet = td.feet + 1;
        td.inch = td.inch - 12;
    }
    return td;
}

int main()
{
    Distance d(3, 5);
    Distance d2(6, 2);
    Distance Td;
    Td = add(d,d2);
    Td.showdata();
    return 0;
}