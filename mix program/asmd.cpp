#include <iostream>
using namespace std;
int main()
{
    int a, b, sub, add, mul, qui;
    cout << "Enter the first number";
    cin >> a;
    cout << "Enter the second number";
    cin >> b;
    add = a + b;
    sub = a - b;
    mul = a * b;
    qui = a % b;
    cout << "The sum of two number is=  " << a << "+" << b << '=' << add << endl;
    cout << "The difference between two number is= " << a << "-" << b << '=' << sub << endl;
    cout << "The product of two number is " << a << "*" << b << '=' << mul << endl;
    cout << "The qutient is " << a << " % " << b << '=' << qui << endl;
    return 0;
}