// simple example of enumeraton
#include <iostream>
using namespace std;

int main()
{
    enum color
    {
        red,
        blue,
        white,
        orange,
        green
    };
    color c;
    c = green;
    cout << "The color code is " << c;

    return 0;
}