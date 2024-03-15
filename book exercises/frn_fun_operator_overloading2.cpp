// overloading of increment operator(++) in prefic and postfix notation using operator function as freiend function
#include <iostream>
using namespace std;
class Distance
{
    int meter, centi;

public:
    Distance(int m, int cm)
    {
        meter = m;
        centi = cm;
    }
    Distance()
    {
        meter = 0;
        centi = 0;
    }
    friend void operator++(Distance &);
    friend void operator++(Distance &, int);
    void Display()
    {
        cout << meter << "m " << centi << "cm " << endl;
    }
};
void operator++(Distance &dis)
{
    ++dis.centi;
    ++dis.meter;
    if (dis.centi >= 100)
    {
        dis.meter = dis.meter + 1;
        dis.centi = dis.centi - 100;
    }
}
void operator++(Distance &dis, int)
{
    dis.centi++;
    dis.meter++;
    if (dis.centi >= 100)
    {
        dis.meter = dis.meter + 1;
        dis.centi = dis.centi - 100;
    }
}
int main()
{
    Distance dis1(10, 50), dis2(12, 90);
    cout << "The original distance dis1 and dis2 are; " << endl;
    dis1.Display();
    dis2.Display();
    cout << "************************************************" << endl;
    ++dis1; // operator++(dis1)
    cout << "The value of object dis1: ";
    dis1.Display();
    dis2++; // same as operator++(dis2,int)
    cout << "The value of object dis2: ";
    dis2.Display();

    return 0;
}