#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    const int pincode = 1818;
    int pin, choice, amount, accountType;
    cout << "**********WEL-COME TO NABIL ATM**********" << endl;
    do     // logged into the ATM via entering your ATM PIN
    {
        cout << "Enter your ATM pin" << endl; /// ask for your ATM pin
        cin >> pin;
        if (pin == pincode) // compare pin with your pincode
        {
            cout << "logged in" << endl; // displays succesfully logged in
        }
        else
        {
            cout << "Try entering your ATM pin again! :(" << endl; // displays error message
        }
    } while (pin != pincode);

    cout << "1.FASTCASH\t 2.WITHDRAWLS\n3.QUEARY\t 4.CASHIN\n5." << endl; // option to choose
    cout << "Enter your choice..." << endl;                               // ask for your choice
    cin >> choice;
    switch (choice) // make choice a switch
    {
    case 1: // to FASTCASH out your choice
    {
        do
        {
            cout << "Kindly choose your amount" << endl
                 << "1.SAVING" << endl
                 << "2.CURRENT" << endl;
            cin >> accountType;
            if (accountType == 1)
            {
                cout << "SAVING ACCOUNT\n";
                cout << "1.1000\t\t2.2000\t\t3.3000\n4.5000\t\t5.10000\t\t6.20000\n7.30000\t\t8.50000\t\t9.100000" << endl;
                cout << "CHOOSE YOUR AMOUNT" << endl;
                cin >> amount;

                switch (amount)
                {
                case 1:
                {
                    cout << "Your choosen amount is Rs.1000\n";
                    break;
                }
                case 2:
                {
                    cout << "Your choosen amount is Rs.2000\n";
                    break;
                }
                case 3:
                {
                    cout << "Your choosen amount is Rs.3000\n";
                    break;
                }
                case 4:
                {
                    cout << "Your choosen amount is Rs.4000\n";
                    break;
                }
                case 5:
                {
                    cout << "Your choosen amount is Rs.5000\n";
                    break;
                }
                case 6:
                {
                    cout << "Your choosen amount is Rs.10000\n";
                    break;
                }
                case 7:
                {
                    cout << "Your choosen amount is Rs.20000\n";
                    break;
                }
                case 8:
                {
                    cout << "Your choosen amount is Rs.50000\n";
                    break;
                }
                case 9:
                {
                    cout << "Your choosen amount is Rs.100000\n";
                    break;
                }
                case 0:
                {
                    cout << "Exiting...";
                    break;
                }
                }
            }
            else
            {
                cout << "NO CURRENT ACCOUNT\n";
            }
            if (amount != 0)
            {
                cout
                    << "\nPlease! collect your cash :)" << endl
                    << "*****COME AGAIN*****";
            }
            else
                cout << "Sorry! NO CASH TRY AGING!" << endl;
        } while (accountType != 1);

        break;
    }
    case 2: // withdraw cash
    {
        cout << "Enter your amount(IN THE MULTIPLE OF 500)" << endl;
        cin >> amount;
        cout << "\nYour amount is " << amount << endl;
        cout << "\nPlease! collect your cash :)" << endl
             << "*****COME AGAIN*****";
        break;
    }
    case 3: // Balance enquary
    {
        cout << "Your total amount is Rs.000000" << endl;
        cout << "Thanks for visiting US :)";
        break;
    }
    case 4: // to put or CASHIN
    {
        cout << "Kindly place your cash into the casebox below the screen" << endl;
        cout << "The casedin amount is Rs.000000" << endl;
        cout << "Thanks for visiting US :)";
        break;
    }
    default:
        cout << "PLEASE ! ENTER VALID CHOICE" << endl;
    }
    return 0;
}