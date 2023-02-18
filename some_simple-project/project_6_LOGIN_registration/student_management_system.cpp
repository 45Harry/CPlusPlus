#include <iostream>
#include <fstream>
#include <string.h>
#include <conio.h>

using namespace std;
void login();
void registration();
void forgot();

int main()
{
    int choice;
    string USERNAME, USERPASSWORD, username, userpassword;
    cout << "\t\t\t___________________________________________________________________\n\n\n";
    cout << "\t\t\t                    Welcome to the Login page                      \n\n\n";
    cout << "\t\t\t______________________        MENU       __________________________\n\n\n";
    cout << "                                                                           \n\n\n";
    cout << "\t| Press 1 to LOGIN                     |" << endl;
    cout << "\t| Press 2 to REGISTER                  |" << endl;
    cout << "\t| Press 3 if you forgot your PASSWORD  |" << endl;
    cout << "\t| Press 4 to EXIT                      |" << endl;
    cout << "\n\t\t\t Plese enter your choice  :";
    cin >> choice;
    cout << endl;
    switch (choice)
    {
    case 1:
        login();
        break;
    case 2:
        registration();
        break;
    case 3:
        forgot();
        break;
    case 4:
        cout << "\t\t\t Thank YOu! \n\n";
        break;
    default:
        system("cls");
        cout << " Please select form the options given above \n " << endl;
        main();
    };
}
void login()
{
    int count;
    string USERNAME, USERPASSWORD, username, userpassword;
string name;
    system("cls");
    cout << "\t\t\t Please enter your username and password :" << endl;
    cout << "\t\t\t USERNAME : ";
    cin >> username;
    cout << "\t\t\t PASSWORD : ";
    cin >> userpassword;
    ifstream input("records.txt");
    while (input >> USERNAME >> USERPASSWORD)
    {
        if (USERNAME == username && USERPASSWORD == userpassword)
        {
            count = count + 1;
            name= USERNAME;
            system("cls");
        }
    }
    input.close();
    if (count = 1)
    {
        cout << name << "\n Your LOGIN is sucessfull \n Thanks for logging in!\n";
        main();
    }
    else
    {
        cout << " \n LOGIN ERROR \n Please check your username and password \n ";
        main();
    }
}
void registration()
{
    string USERNAME, USERPASSWORD, username, userpassword;

    system("cls");
    cout << "\t\t\t Enter the username :";
    cin >> USERNAME;
    cout << "\t\t\t Enter the password :";
    cin >> USERPASSWORD;
    ofstream f1("records.txt", ios::app);
    f1 << USERNAME << " " << USERPASSWORD << endl;
    system("cls");
    cout << "\n\t\t\t Registration is sucessfull! \n";
    getch();
    main();
}
void forgot()
{
    string USERNAME, USERPASSWORD, username, userpassword;

    int options;
    int count = 0;
    system("cls");
    cout << "\t\t\t You forgot the password ? No worries \n";
    cout << " Press 1 to search your id by username" << endl;
    cout << " Press 2 to go back to main menu\n";
    cout << "\t\t\t Enter your choice :";
    cin >> options;
    switch (options)
    {
    case 1:
    {
string pass;
        cout << "\n\t\t\t Enter your username which you remembered : ";
        cin >> username;
        ifstream f2("records,txt");
        while (f2 >> USERNAME >> USERPASSWORD)
        {
            if (USERNAME == username)
            {
                count++;
                cout << "\n\n Your password is : " << USERPASSWORD;
                pass=USERPASSWORD;
            }
        }
        f2.close();
        if (count == 1)
        {
            cout << "\n\n  Your account is found! \n";
                            cout << "\n\n Your password is : " << pass;


            main();
        }
        else
        {
            cout << "\n\t Sorry! Your accunt is not found!\n";
            getch();
            main();
        }
        break;
    }
    case 2:
    {
        main();
    }
    default:
        cout << "Wrong choice! Plese try again " << endl;
        forgot();
    }
}