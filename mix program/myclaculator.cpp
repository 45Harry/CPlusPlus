#include <iostream>
#include <windows.h> // using system() from this library function
#include <cstdio>   //using getchar() from this library function
using namespace std;
int main()
{
    int a, b, choice;
   // system("CLS");
    do
    {
        system("CLS");
        cout << "         ****Simple Calculator****" << endl;
        cout << "1.ADD" << endl;
        cout << "2.SUBTRACT" << endl;
        cout << "3.MULTIPLY" << endl;
        cout << "4.DIVISION" << endl;
        cout << "5.EXIT" << endl;
        cout << "          ********Bye-Bye********"
             << endl;
        cout << "Enter your choice ?" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "                   ****ADDITION****" << endl;
            cout << "Enter the first number ?";
            cin >> a;
            cout << "Enter the second number ?";
            cin >> b;
            system("CLS");
            cout << "The sum of two number is : " << a + b << endl;
            cout << "Enter any key to continue \(:";
            getchar();
            break;
        case 2:
            cout << "                   ****SUBRTACTION****" << endl;
            cout << "Enter the first number ?";
            cin >> a;
            cout << "Enter the second number ?";
            cin >> b;
            system("CLS");
            cout << "The subtract of two number is : " << a - b << endl;
            cout << "Enter any key to continue\(:";
            getchar();
            break;
        case 3:
            cout << "****               MULTLIPLATION****" << endl;
            cout << "Enter the first number ?";
            cin >> a;
            cout << "Enter the second number ?";
            cin >> b;
            system("CLS");
            cout << "The multiplication of" << a << "and " << b << "number is : " << a * b << endl;
            cout << "Enter any key to continue \(:";
            getchar();

            break;
        case 4:
            cout << "****               DIVISION****" << endl;
            cout << "Enter the firsr number ?";
            cin >> a;
            cout << "Enter the second number ?";
            cin >> b;
            system("CLS");
            cout << "The division between two number is : " << a / b << endl;
            cout << "Enter any key to continue\(:";
            getchar();

            break;
        case 5:
            cout << "                   ****ERROR****" << endl;
            cout << "Invalid! Choice please try again." << endl;
            cout << "Enter any key to continue";
            getchar();
            break;
        default:
            system("CLS");
            cout << "Please! Enter your choice between 1 to 5.";
            getchar();

            break;
        };
    } while (choice < 5);
    return 0;
}