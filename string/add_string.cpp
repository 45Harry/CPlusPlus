// this program add or concat two string without using strcat function

#include <iostream>
using namespace std;

int main()
{
    char str1[20], str2[10];
    int len1, len2, j = 0, i = 0;
    cout << "Enter first string : ";
    cin >> str1;
    cout << "Enter second string : ";
    cin >> str2;
    while (str1[i] != '\0')
    {
        i++;
    }
    len1 = i;
    i = 0;
    while (str2[i] != '\0')
    {
        i++;
    }
    len2 = i;
    for (i = len1; i < (len1 + len2); i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';
    cout << "The concated string is :" << str1 << endl;

    return 0;
}