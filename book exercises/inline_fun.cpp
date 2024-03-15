// to find area of circle using inline function
#include <iostream>
using namespace std;
inline float function_Area(float r, float PI = 3.14)
{
    return PI * r * r;
}
int main()
{
    cout << "The area of circle is " << function_Area(6.6);

    return 0;
}