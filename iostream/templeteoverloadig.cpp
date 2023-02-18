#include <iostream>
using namespace std;
template <class t, class T>
void find(t a, t b)
{
    if (a > b)
        cout << a << "is greater" << endl;
    else
        cout << b << "is greater";
}
void find(T x,T y,T z)
{
    if (x > y && x > z)
        cout << x << "is greater" << endl;
    else if (y > z)
        cout << y << "is greater" << endl;
    else
        cout << z << "is greater" << endl;
}

int main()
{
    int g = 4, h = 7;
    float r = 3.4, u = 4.4, o = 5.3;
     t find(g,h);
    T find(r,u,o);

    return 0;
}