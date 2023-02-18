#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
void login();
void registration();
void forgotPassword();

int main()
{
    int choice;
    system("cls");
    cout << "\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t _______________________________________________________________________________________\n";
    cout << "    \n\t\t\t\t\t\t\t\t                              Welcome to login page                                   \n";
    cout << "\t\t\t\t\t\t\t\t _______________________________________________________________________________________\n";
    cout << "\n\n\t\t\t\t\t\t\t\t 1.LOGIN \n \t\t\t\t\t\t\t\t 2.REGISTRATION \n \t\t\t\t\t\t\t\t 3.FORGOTTEN PASSWORD \n \t\t\t\t\t\t\t\t 4.EXIT \n";
    cout << "\n\n\t\t\t\t\t\t\t\t Please choose from the given options.\n\t\t\t\t\t\t\t\t ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        system("cls");
        login();
        cout << " \n\t\t\t\t\t\t\t\t";

        system("pause");
        main();
        break;
    }
    case 2:
    {
        system("cls");
        registration();
        cout << " \n\t\t\t\t\t\t\t\t";
        system("pause");
        main();
        break;
    }
    case 3:
    {
        system("cls");
        forgotPassword();
        cout << " \n\t\t\t\t\t\t\t\t";

        system("pause");

        main();
        break;
    }
    default:
        system("cls");
        cout << "Invalid choice! Please choose from the given options";
        main();
    };

    return 0;
}
void login()
{
    fstream data;
    int count = 1;
    string username, password, userid, pass;
    data.open("data.txt", ios::in);
    cout << "    \n\t\t\t\t\t\t\t\t Please LOGIN ! \n";
m:
    cout << "    \n\t\t\t\t\t\t\t\t Enter your Username and Password\n\n";
    cout << "\n \n\t\t\t\t\t\t\t\t USERNAME: ";
    cin >> username;
    cout << "\n\t\t\t\t\t\t\t\t PASSWORD: ";
    cin >> password;
    data >> userid >> pass;
    while (!data.eof())
    // while (data >> userid >> pass)
    {

        if (userid == username && pass == password)
        {
            // cout << " \n\t\t\t\t\t\t\t\t SUCCESSFULLY LOGGID IN! :)";
            count = count + 1;
        }

        data >> userid >> pass;
    }
    data.close();

    if (count == 2)
    {
        cout << " \n\t\t\t\t\t\t\t\t SUCCESSFULLY LOGGID IN! :)";
        cout << "\n\t\t\t\t\t\t\t\t Dear " << username << " Welcome to the server ";
    }
    else
    {
        cout << "\n\t\t\t\t\t\t\t\t Invalid USERNAME and PASSWORD ";
    }
}
void registration()
{
    string username, password, userid, pass;
    fstream data;
    data.open("data.txt", ios::out | ios::app);
    cout << "\n\t\t\t\t\t\t\t\t Please Registar! ";
    cout << "\n\t\t\t\t\t\t\t\t USERNAME: ";
    cin >> userid;
    cout << "\n\t\t\t\t\t\t\t\t PASSWORD: ";
    cin >> pass;
    data << userid << "  " << pass << " \n ";
    data.close();
    cout << "\n\t\t\t\t\t\t\t\t SUCCESFULLY REGISTER!";
}
void forgotPassword()
{
    int count = 0;
    string userid, pass, username, password;
    fstream data;
    data.open("data.txt", ios::in);
    cout << "\n\t\t\t\t\t\t\t\t Forgot Password! ";
    cout << "\n\t\t\t\t\t\t\t\t Please Enter the USERNAME you rembered :) :";
    cin >> username;
    data >> userid >> pass;
    // while (data >> userid >> pass)
    while (!data.eof())

    {
        if (username == userid)
        {
            count = 1;
        }
        data >> userid >> pass;
    }
    if (count == 1)
    {
        cout << "\n\t\t\t\t\t\t\t\t Your password is " << pass;
    }
    if (count == 0)
    {
        cout << "\n\t\t\t\t\t\t\t\t Invalid USERNAME\n";
    }
    data.close();
}
