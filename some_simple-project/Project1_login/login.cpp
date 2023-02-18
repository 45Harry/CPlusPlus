#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main()
{
    string name;
    string password;
    string username = "Harry";
    string userpass = "har";
    fstream o;
    o.open("user_name.txt", ios::app);
    cout << "Enter your username:";
    cin >> name;
    cout << "Enter your password:";
    cin >> password;

    if (name == username && password == userpass)
    {
        cout << "Login Successfully" << endl;
    }
    else
    {
        cout << "Login Failed" << endl;
        cout << "Please try again";
    }
    int i = 1;

    o << "username" << i << "=" << name << endl
      << "password" << i << "=" << password << endl;

    o.close();

    return 0;
}