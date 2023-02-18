// program to illustrate the use of pointer
#include <iostream>
using namespace std;

int main()
{
    int num = 45, nub = 56;
    int *ptr;
    ptr = &num;
    int *j;
    *j = nub;
    cout << "The address of num is " << &num << endl;
    // Address of num using pointer
    cout << "The address of num is " << ptr << endl;
    // value of num
    cout << "The value of num is " << num << endl;
    // value of num using pointer
    cout << "The value of num is " << *ptr << endl;
    // Address of pinter pteris

    cout << "The address of pointere ptr is " << &ptr << endl;
    cout << "The address of pointere j is " << *j;

    return 0;
}