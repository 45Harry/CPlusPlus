// program with a function named factorial(x) which takes int x and returns long value.::
// it also calculte permutaion of number i.e. nPr using above function facotral
#include <iostream>
using namespace std;
// function takes intgeter and returns long
long factorial(int x)
{
    long fact = 1; // creates a long variable
    if (x > 0)
    {
        fact *= factorial(x - 1); // now assinging int values to long as in fact
    }
    else
        return fact;
    // this is alternative ways to do recurssion
    // long fact = 1;
    // for (int i = 0; i < x; i++)
    // {
    //     fact *= factorial(x - 1);
    // }
    // return fact;
}

int main()
{
    int n, r;
    long f1 = 1, f2 = 1, ff = 1;
    cout << "Enter the n : ";
    cin >> n;
    cout << "Enter the r : ";
    cin >> r;
    f1 = factorial(n);
    f2 = factorial(n - r);
    ff = (f1 / f2);
    cout << "The nPr of " << n << " and " << r << " is " << ff << endl;

    return 0;
}