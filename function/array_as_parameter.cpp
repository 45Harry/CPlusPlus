#include <iostream>
using namespace std;

void myFunction(int arryData[5]) // passing array as an parameter
{
    for (int i = 0; i <= sizeof(arryData[5]); i++) // accessing array value using sizeof function
    {
        cout << arryData[i] << endl;
    }
}
int main()
{
    int arryData[5] = {3, 4, 5, 2, 1};
    myFunction(arryData);
    return 0;
}
