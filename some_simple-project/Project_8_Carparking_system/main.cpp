#include <iostream>
#include <windows.h>
#include <fstream>
using namespace std;

int main()
{
    int choice, Max = 0;
    int amount = 0, count = 0;
    int r = 0, c = 0, b = 0;
    system("color f0");
    system("CLS");

    while (true)
    {
        // menu

        cout << "\n\n\n\n\n\n\t\t\t\t\t\t\u001b[33;1mPress 1 for Rickshaw" << endl;
        cout << "\n\n\t\t\t\t\t\t\u001b[34;1mPress 2 for Car" << endl;
        cout << "\n\n\t\t\t\t\t\t\u001b[35;1mPress 3 for Bus" << endl;
        cout << "\n\n\t\t\t\t\t\t\u001b[36;1mPress 4 to show Record" << endl;
        cout << "\n\n\t\t\t\t\t\t\u001b[37;1mPress 5 to delete the record\u001b[0m" << endl;

        cin >> choice;
        ofstream apple("txtt.txt");

        if (choice == 1)
        {
            if (Max < 3)
            {
                cout << " \n\n\t\t\t\t\t\t\u001b[32;1m^_^ 1 Richshaw is inserted:)\u001b[0m" << endl;
                amount += 100;
                count += 1;
                r++;
                Max++;
            }
            else
            {
                cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
                cout << "\t\t\t\t\t\t\u001b[31;1mNo more Vehicles, Parking is full\u001b[0m" << endl;
                break;
            }
        }
        else if (choice == 2)
        {
            if (Max < 3)
            {

                cout << " \n\n\t\t\t\t\t\t\u001b[32;1m^_^ 1 Car is inserted:)\u001b[0m" << endl;

                amount += 200;
                count += 1;
                c++;
                Max++;
            }
            else
            {
                cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
                cout << "\t\t\t\t\t\t\u001b[31;1mNo more Vehicles, Parking is full\u001b[0m" << endl;
                break;
            }
        }
        else if (choice == 3)
        {
            if (Max < 3)
            {

                cout << " \n\n\t\t\t\t\t\t\u001b[32;1m^_^ 1 Bus is inserted:)\u001b[0m" << endl;

                amount += 300;
                count += 1;
                b++;
                Max++;
            }
            else
            {
                cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
                cout << "\t\t\t\t\t\t\u001b[31;1mNo more Vehicles, Parking is full\u001b[0m" << endl;
                break;
            }
        }
        else if (choice == 4)
        {
            cout << "\t\t\t\t\t\t************************************" << endl;
            cout << "\t\t\t\t\t\t\u001b[33;1mThe total amount =" << amount << endl;
            cout << "\t\t\t\t\t\t\u001b[34;1mThe total number of Vehicles parked =" << count << endl;
            cout << "\t\t\t\t\t\t\u001b[37;1mThe total number of Rickshaw is " << r << endl;
            cout << "\t\t\t\t\t\t\u001b[35;1mThe total number of Cars is " << c << endl;
            cout << "\t\t\t\t\t\t\u001b[36;1mThe total number of Buses is\u001b[0m " << b << endl;
            cout << "\t\t\t\t\t\t************************************" << endl;
        }
        else if (choice == 5)
        {
            cout << "\t\t\t\t\t\t************************************" << endl;

            cout << "\t\t\t\t\t\t\u001b[30;1mAll of the records are deleted ^_^\u001b[0m";
            cout << "\t\t\t\t\t\t************************************" << endl;

            amount = 0;
            count = 0;
            b = 0;
            r = 0;
            c = 0;
        }
        else
        {
            cout << "\t\t\t\t\t\t\u001b[31;1mINVALID CHOICE!\u001b[0m" << endl;
        }
    }

    return 0;
}