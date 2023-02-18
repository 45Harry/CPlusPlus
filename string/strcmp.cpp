// this functin is used to compare the length of two stirng
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name1[20];
    char name2[20];
    cout << "Enter the fist stirng: ";
    cin >> name1;
    cout << endl
         << "Enter the second stirng: ";
    cin >> name2;
    int diff = strcmp(name1, name2);
    if (diff > 0)
    {
        cout << name1 << " is greater than " << name2 << " by value " << diff << endl;
    }
    else if (diff < 0)
    {
        cout << name2 << " is greater than " << name1 << " by value " << diff << endl;
    }
    else
    {
        cout << name2 << " is same as " << name2 << endl;
    }

    return 0;
}