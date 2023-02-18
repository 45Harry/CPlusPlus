// this the practise program for combination
#include <iostream>
using namespace std;
// long fact(long n) //this is using recursinon method
// {
//     if (n == 0)
//     {
//         return 1;
//     }
//     else
//         return n * fact(n - 1);
// }
long fact(long n) // this is without recursion
{
    long fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}
int main()
{
    long n, r;
    long f1 = 1, f2 = 1, f3 = 1, comb;
    cout << "Enter the n :";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;
    f1 = fact(n);
    f2 = fact(r);
    f3 = fact(n - r);
    comb = f1 / (f2 * f3);
    cout << "The nCr is :" << comb;

    return 0;
}