// program will ask user to enter floating point number and raise it to an integer power(i.e. y^m)
#include <iostream>
using namespace std;
int evaluateFunction(int power, float number)
{
    int intNumber = static_cast<int>(number);
    int intVal;
    for (int i = 0; i < power; i++)
    {
        intVal *= intNumber;
    }
    return intVal;
}

int main()
{
    int power;
    float number;
    cout << "Enter the floating point number: ";
    cin >> number;
    cout << "Entet the integer power :";
    cin >> power;
    int result = evaluateFunction(power, number);
    cout << "The raised power is :" << result;

    return 0;
}
