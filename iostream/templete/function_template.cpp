#include <iostream>
using namespace std;
template <class T1, class T2>
float average(T1 x, T2 y)
{
    float avg = (x + y) / 2;
    return avg;
}
int main()
{
    cout << "The average of two number is " << average(34, 5.56);

    return 0;
}