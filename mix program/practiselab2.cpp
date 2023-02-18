#include <iostream>

using namespace std;
class Distance
{
public:
    float feet;
    float inch;

public:
Distance (Distance g){
    feet=g.feet;
    inch=g.inch;
}
     void addistance (Distance d1, Distance d2)
    {
        Distance c;
        c.feet = d1.feet + d2.feet;
        c.inch = d1.inch + d2.inch;
        if (c.inch >= 12)
        {
            c.feet = c.feet + 1;
            c.inch = c.inch - 12;
            
        }
        return c;
    }

    void showData()
    {
        cout << "The distance is  "<<c.feet<<"'  "<<c.inch<<"\"";
    }
};
 int main()
{
    Distance d3;
    Distance d1(3,4);
    Distance d2(6,3);
    d3.addistance(d1,d2);
    d3.showData();
    return 0;
}