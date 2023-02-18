#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch, chh, n;
    int firstn, secondn;
    do
    {
        cout << "\nEnter first number,operator,second number: ";
        cin >> firstn >> ch >> secondn;
        switch (ch)
        {
        case '+':
        {
            cout << "\nAnswer is " << firstn + secondn;
            break;
        }
        case '-':
        {
            cout << "\nAnswer is " << firstn - secondn;
            break;
        }
        case '*':
        {
            cout << "\nAnswer is " << firstn * secondn;
            break;
        }
        case '/':
        {
            cout << "\nAnswer is " << firstn / secondn;
            break;
        }
        default:
            cout << "Invalid option ";
        };
        cout << "\nDo another (y/n)? ";
        chh = getche();
    } while (chh != 'n');
    return 0;
}