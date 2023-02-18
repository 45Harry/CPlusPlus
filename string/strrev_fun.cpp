// this progrma illustrate the use of strrev funciton
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    char sttring[30];
    char copysttring[30];
    cout << "Enter the string to reverse ";
    cin >> sttring;
    strcpy(copysttring, sttring);
    strrev(copysttring);
    cout << "The revers of " << sttring << "is " << copysttring;

    return 0;
}