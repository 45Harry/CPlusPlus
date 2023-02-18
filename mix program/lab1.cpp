#include <iostream>
//#include <windows.h>
using namespace std;
int main()
{
    int a, b, choice;
    do
    {

        cout << "****Simple Calculator****" << endl;
        cout << "1.ADD" << endl;
        cout << "2.SUBTRACT" << endl;
        cout << "3.MULTIPLY" << endl;
        cout << "4.DIVISION" << endl;
        cout << "5.EXIT" << endl;
        cout << "********Bye-Bye********" << endl
             << endl;
        cout << "Enter the first number ?";
        cin >> a;
        cout << "Enter the second number ?";
        cin >> b;
        cout << "Enter your choice ?" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:

            cout << "The sum of two number is : " << a + b << endl;
            break;
        case 2:

            cout << "The subtract of two number is : " << a - b << endl;

            break;
        case 3:

            cout << "The multiplication of two number is : " << a * b << endl;

            break;
        case 4:

            cout << "The division between two number is : " << a / b << endl;

            break;
        case 5:

            cout << "EXIT" << endl;

            break;
        default:

            cout << "Please! Enter your choice between 1 to 5.";

            break;
        };
    } while (choice < 5);
    return 0;
}