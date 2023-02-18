#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number to be checked ?";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "The number is even";
    }
    else
    {
        cout << "The number is odd";
    }
    return 0;
}