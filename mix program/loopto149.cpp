//to find the square of 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long int a = 1, i;
    for (i = 1; i <= 10; i++)
    {
        cout << a << "\t";
        // i++;
        a = pow(i, 2);
    }
    return 0;
}