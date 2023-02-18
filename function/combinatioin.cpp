// program to calcute the combination
#include <iostream>
using namespace std;
long factorial(int pa)
{
    long fact = 1;
    for (int i = 1; i <= pa; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int n, r;
    long f1 = 1, f2 = 1, f3 = 1;
    cout << "Enter n and r :";
    cin >> n >> r;
    f1 = factorial(n);
    f2 = factorial(n - r);
    f3 = factorial(r);
    long combination;
    combination = f1 / (f2 * f3);
    cout << "The combination of " << n << " and " << r << " is " << combination;
    return 0;
}