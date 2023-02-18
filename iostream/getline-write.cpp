#include <iostream>
// #include <cstring>
#include <windows.h>
using namespace std;

int main()
{
    char ch[10];
    cout << "Enter your name:";
    cin.getline(ch, 10);
    cout << "Your Name is:";
    int l = strlen(ch);
    for (int i = 1; i < l; i++)
    {
        cout.write(ch,i);
        cout << endl;
    }

    return 0;
}