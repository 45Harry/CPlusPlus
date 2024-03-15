// function to find area of triangle and square using function overloading
#include <iostream>
using namespace std;
double areaOfObject(float l)
{
    return l * l;
}
double areaOfObject(float L, float B)
{
    return (L * B) / 2;
}

int main()
{

    cout << "The area of trianmgl is " << areaOfObject(5, 6);
    cout << "The area of square is " << areaOfObject(5);

    return 0;
}