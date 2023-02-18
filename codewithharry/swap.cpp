#include <iostream>
using namespace std;
template <class T>
void swapp(T *a, T *b)
{
    T temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 20;
    int y = 50;
    float v=3.4;
    float b=3.55;

    cout << "The value of a and b is " << x << " " << y << endl;

    swapp(&x, &y);
    cout << "The value of x and y is " << x << " " << y << endl;
    swapp(&v,&b);
    cout << "The value of v and b is " << v << " " << b<< endl;


    return 0;
}