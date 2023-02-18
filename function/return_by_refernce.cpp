// this program illusttate returning value by reference or memory address
#include <iostream>
using namespace std;
int &retFun(int)
{
    static int x;
    return x = 45;
}

int main()
{
    int x = 34;
    cout << "Value of x before functin call: " << x;

    cout << "\nValue of x after functin call: " << retFun(x);

    return 0;
}