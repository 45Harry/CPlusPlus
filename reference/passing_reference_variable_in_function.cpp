// passing reference vairable in function
#include <iostream>
using namespace std;
void sumFunctin(int &x, int &y)
{
    x = 45;
    y = 45;
    cout << "The sum of two number is " << x + y;
}

int main()
{
    int x = 6;
    int y = 67;
    sumFunctin(x, y);

    return 0;
}