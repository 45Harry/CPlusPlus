#include <iostream>
using namespace std;
class Derived;
class Base
{
protected:
    int num1;

public:
    Base()
    {
        num1 = 10;
    }

    friend int add(int a, int b);
};
class Derived
{
protected:
    int num2;

public:
    Derived()
    {
        num2 = 20;
    }

    friend int add(int a, int b);
};
friend int add(int a, int b)
{
    int c;
    c = a + b;
}
int main()
{
    Base b;
    Derived d;
    cout << "The sum of two diffeent data of two different class is " << add(b.num1, d.num2);

    return 0;
}