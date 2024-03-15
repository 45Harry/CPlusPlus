// progrma to display even number for n1 to n2
#include <iostream>
using namespace std;
void evenFunction(int n1, int n2 = 40)
{
    for (int i = n1; i <= n2; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    cout << "Even number form n1 to 40 are: ";
    evenFunction(2);

    return 0;
}