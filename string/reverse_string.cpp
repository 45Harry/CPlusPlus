// This program reverse a given string without using string handling function
#include <iostream>
using namespace std;

int main()
{
    char str1[20];
    char str2[20];
    int len, i = 0, j = 0;
    cout << "Enter the first string :";
    cin >> str1;
    while (str1[i] != '\0')
    {
        i++;
    }
    len = i;
    for (i = len - 1; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    cout << "The reverse sting is :" << str2;

    return 0;
}