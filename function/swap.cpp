// this program illustrate the passing argument or paramater by value
#include <iostream>
using namespace std;
void swapFun(int, int);

int main()
{
    int X, Y;
    X = 67;
    Y = 69;
    cout << "Before calling function X= " << X << " and Y= " << Y << endl; // while passing parameter or argument by value doen't change its original value , actually actual value are being copied to parameters
    swapFun(X, Y);                                                         // value are being changed in the function but are only for function
    cout << "After calling function X= " << X << " and Y= " << Y << endl;  // value are same as it was at the beginning

    return 0;
}
void swapFun(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << "Values within the function are " << x << "and Y" << y << endl;
}