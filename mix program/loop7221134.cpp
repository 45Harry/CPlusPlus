#include <iostream>
using namespace std;
int main()
{
    int a = 7, i;
    for (i = 1; i <= 10; i++)
    {
        cout << a << "\t";

        if (a % 2 == 0)
        {
            a = a / 2;
        }
        else
            a = a * 3 + 1;
    };
    return 0;
}