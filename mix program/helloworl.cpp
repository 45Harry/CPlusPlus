#include <iostream>
using namespace std;
int main()
{
    int a = 1, i=1;
    while (i <= 50)
    {
        cout << a << "\t";
        a = a + 2;
        i = i + 1;
    }
    return 0;
}