// this program illustrate the exzmple of pointer
#include <iostream>
using namespace std;

int main()
{
    int num = 45;
    int *ptr;
    ptr = &num;
    cout << "Value of num without using pointer :" << num << "\n";
    cout << "Memory address of num without using pointer: " << &num << endl;
    cout << "Value of num using pointer :" << *ptr << "\n";
    cout << "Memory address of num using pointer:" << ptr << endl;

    return 0;
}