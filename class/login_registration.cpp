#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Login_Registration
{
private:
    string userName, Name, Pass;
    string userPassword;
    int count = 0;

public:
    Login_Registration(){};
    Login_Registration(string Username, string Userpassword)
    {
        Username = userName;
        Userpassword = userPassword;
    }
    void Login();
    void Register();
    void ForgotPassword();
    void EXIT();
};

void Login_Registration::Login()
{
    //  string urser, passs;
    cout << "\n\n\n\n\t\t\t\t\t\t ~~~Welcome to ZinnZoo~~~";
    cout << "\n\n\n\n\t\t\t\t\t\t      Please Login:)";
    cout << "\n\n\n\n\t\t\t\t\tEnter Your UserID! : \n\n\n\n\t\t\t\t\t";
    cin >> Name;
    cout << "\n\n\n\n\t\t\t\t\tEnter Your PassWord! : \n\n\n\n\t\t\t\t\t";
    cin >> Pass;

    ifstream login("LoginData.txt");

    // while (login >> urser >> passs)
    while (!login.eof())
    {
        if (userName == Name && userPassword == Pass)
        {
            count = 1;
        }
        login >> userName >> userPassword;
    }
    login.close();
    if (count == 1)
    {
        cout << "\n\n\n\t\t\t\t\t Login Successfully!";
    }
    else
    {
        cout << "\n\n\n\t\t\t\t Invalid Username and Password :(";
    }
}
void Login_Registration::Register()
{
    ofstream login("LoginData.txt", ios::app);
    cout << "\n\n\n\n\t\t\t\t\t\t ~~~Welcome to ZinnZoo~~~";
    cout << "\n\n\n\n\t\t\t\t\t\t      Please Register Yourself :)";
    cout << "\n\n\n\n\t\t\t\t\tCreate Your UserID! : ";
    cin >> userName;
    cout << "\n\n\n\n\t\t\t\t\tCreate Your PassWord! : ";
    cin >> userPassword;
    login << userName << " " << userPassword << endl;
    login.close();
    cout << "\n\n\n\t\t\t\t Successfully Registered:)";
}
void Login_Registration::ForgotPassword() // function forgot password
{
    string UN, UP;
    int xou;
    cout << "\n\n\n\n\t\t\t\t\t\t   ~~~Welcome to ZinnZoo~~~";
    cout << "\n\n\n\n\t\t\t\t\tEnter Your UserID! : \n\n\n\n\t\t\t\t\t";
    cin >> Name;
    ifstream login("LoginData.txt");
    while (login >> UN >> UP)
    // while (!login.eof())
    {
        if (UN == Name)
        {
            xou = 1;
        }
        // login >> userName >> userPassword;
    }
    login.close();

    if (xou == 1)
    {
        cout << "\n\n\n\t\t\t\t\t Your password is " << UP;
    }
    else
    {
        cout << "\t\t\t\t Invalid username!";
    }
}
int main()
{
    int choice;
    Login_Registration object;
    cout << "\n\n\n\n\t\t\t\t\t\t Welcome to ZINNZOO!";
    cout << "\n\n\n\n\t\t\t 1. Login\n\n\n\n\t\t\t 2. Register \n\n\n\n\t\t\t 3. ForgotPassword\n\n\n\n\t\t\t 4.Exit ";
    cout << "\n\n\n\t\t\t Select Your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        object.Login();
        break;
    }
    case 2:
    {
        object.Register();
        break;
    }
    case 3:
    {
        object.ForgotPassword();
        break;
    }
    case 4:
    {
        exit(0);
        break;
    }
    default:
        cout << "\n\n\t\t\tInvalid choice! Try Again";
    };
    // object.Login();

    return 0;
}