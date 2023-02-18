// this program illustrate how to copy string with out using sting handling function
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[25], str2[25], len, i = 0;
    cout << "Enter a string :";
    cin >> str1;
    while (str1[i] != '\0')
    {
        i++;
    }

    len = i;
    for (int i = 0; i <= len; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';
    cout << "The original string is: " << str1 << endl;
    cout << "The copied string is: " << str2 << endl;

    return 0;
}