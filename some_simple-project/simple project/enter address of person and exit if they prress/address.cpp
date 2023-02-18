#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main()
{   char h;
    char name[35];
    char addr[56];
    cout << "Enter the name of the person ";
    cin.getline(name, 35);
    cout << "Enter the address of the person ";
    cin.getline(addr, 56);
    do
    {
        cin >> h;

    } while (h != SO);
    // system("pause");

    // cin.get();

    return 0;
}