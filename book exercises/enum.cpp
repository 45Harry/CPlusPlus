// to define an enumerator color with various color as it member .read integer from user and display color name corresponding ot integer
#include <iostream>
using namespace std;

int main()
{
    int num;
    enum Color
    // enumerator color
    {
        red = 1,
        green,
        blue,
        yellow,
        purple,
        orange,
        white,
        black
    };
    Color col;
m:
    // asking user to enter the color code(number)
    cout << endl
         << "Enter the number(1-8):";
    cin >> num;
    // check if the enterd number is valid or not
    if (num < 1 || num > 8)
    {
        cout << "Invalid color code: Please enter between 1-8;)";
        goto m;
    }

    col = Color(num);
    // setting the color based on input user
    switch (col)
    {
    case 1:
        col = red;
        break;
    case 2:
        col = green;
        break;
    case 3:
        col = blue;
        break;
    case 4:
        col = yellow;
        break;
    case 5:
        col = purple;
        break;
    case 6:
        col = orange;
        break;
    case 7:
        col = white;
        break;
    case 8:
        col = black;
        break;
    }
    // print the corrsponding color
    cout << "The corresponding color is :";
    switch (col)
    {
    case red:
        cout << "Red";
        break;
    case green:
        cout << "Green";
        break;
    case blue:
        cout << "Blue";
        break;
    case yellow:
        cout << "Yellow";
        break;
    case purple:
        cout << "Purple";
        break;
    case orange:
        cout << "Orange";
        break;
    case white:
        cout << "White";
        break;
    case black:
        cout << "Black";
        break;
    }

    return 0;
}