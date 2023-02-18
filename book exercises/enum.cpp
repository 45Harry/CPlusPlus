// to define an enumerator color with various color as it member .read integer from user and display color name corresponding ot integer
#include <iostream>
using namespace std;

int main()
{
    enum Color // enumerator color
    {
        red = 1, green, blue, yellow, purple, orange, white, black;
    };
    Color col;
    int num;
    // asking user to enter the color code(number)
    cout << "Enter the number(1-8):";
    cin >> num;
    // print the corrsponding color
    cout << "The corresponding color is :";
    for (int i = 1; i <= 8; i++)
    {
        // compare num withe each number in col
        if (col[i] == num)
        {
            // print the color
            cout << col[i];
        }
    }

    return 0;
}