// This program is used to copy one string to another
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name[23] = "Harry ";
    char lastName[45] = "Sah";
    cout << "My full name is " << strcat(name, lastName) << endl;

    strcpy(name, lastName);
    cout << "My name is " << name;

    return 0;
}