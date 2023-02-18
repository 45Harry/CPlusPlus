// this program illustrate the use fo strlen function
#include <iostream>
#include <string.h> //this header contains string handling functins
using namespace std;

int main()
{
    char name[30];
    int namLength;
    cout << "Enter your name " << endl;
    cin >> name;
    namLength = strlen(name);
    cout << "The length of string is : " << namLength << endl;

    return 0;
}