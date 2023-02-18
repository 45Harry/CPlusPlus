// This program illustrate passing argument by memory address or reference
#include <iostream>
using namespace std;
void swapFun(int &, int &);
int main()
{
    int a = 45, b = 18;
    cout << "Value before calling function :" << a << " " << b << endl;
    swapFun(a, b);
    cout << "Value after calling function :" << a << " " << b << endl;

    return 0;
}
void swapFun(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
}