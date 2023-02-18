#include <iostream>
using namespace std;
int recursion(int k)
{
    if (k > 0)
    {
        return k + recursion(k - 1);
    }
    else
        return 0;
}
int main()
{
    cout << "The Factorial of Given number(ie. 5 )is " << recursion(5);
    return 0;
}