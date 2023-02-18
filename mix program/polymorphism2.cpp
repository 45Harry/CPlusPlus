#include <iostream>
using namespace std;
float avg(float a, float b)
{
    return (a + b) / 2;
}
float avg(float p, float q, float r)
{
    return (p + q + r) / 3;
}
int main()
{
    cout << "The avgerage of two number is:" << avg(3, 5) << endl;
    cout << "The average of three number is:" << avg(56, 34, 2) << endl;
    return 0;
}