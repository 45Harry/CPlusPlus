#include <iostream>
using namespace std;
int main()
{
    int choice;
    do
    {
        cout << "******SIMPLE CALCULATOR******"; // list of some

        cout << "1.ADDITION";
        cout << "2.SUBTRACT";
        cout << "3.MULTIPLY";
        cout << "4.DIVIDE";
        cout << "5.EXIT";
        cout << "******GOOD LUCK******" << endl
             << endl;
        cout << "Enter your choice ?";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "                           ****ADDITION****";
            int a, b;
            cout << "Enter the first number?";
            cin >> a;
            cout << "Enter the second number?";
            cin >> b;
            cout << "The sum of" << a << "+" << b << " is " << a + b << endl;
            break;
        case 2:
            cout << "                        ****SUBTRACT****";
            int a, b;
            cout << "Enter the first number?";
            cin >> a;
            cout << "Enter the second number?";
            cin >> b;
            cout << "The  difference between" << a << "-" << b << "is " << a - b << endl;
            break;
        case 3:
            cout << "                        ****MULTIPLICATION****";

            int a, b;
            cout << "Enter the first number?";
            cin >> a;
            cout << "Enter the second number?";
            cin >> b;
            cout << "The multiply of" << a <<" * "<< b <<" is " << a * b << endl;
                        break;
        case 4:
            cout << "                        ****DIVISION****";

            float a, b;
            cout << "Enter the first number?";
            cin >> a;
            cout << "Enter the second number?";
            cin >> b;
            cout << "The division of " << a << "/" << b << " is  " << a / b << endl;
            break;
        case 5:
            cout << "                        ****Error! ****";

            cout << " Enter the valid choice";
            break;
        default:
            cout << "PlEASE! Enter the valid number\(:";
            break;
        }                  // switch case ends
    } while (choice != 5); // while case ends
    return 0;
}