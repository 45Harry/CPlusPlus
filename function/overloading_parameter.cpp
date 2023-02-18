#include <iostream>
using namespace std;
int addFun(int x, int y)
{
    return x + y;
}
double addFun(double x, double y)
{
    return x + y;
}
int main()
{
    cout << "The sum of two interger is " << addFun(5, 6) << endl;
    cout << "The sum of two interger is " << addFun(5.6, 56.55);

    return 0;
}