#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    string username;
    string passcode;

    fstream f("userdata.txt", ios::in);
    f >> username >> passcode;
    f.close();

    string password;
    string Username;
    fstream ff;
    ff.open("dataFile.txt", ios::app);

    do
    {
        cout << "Enter your username:";
        cin >> Username;
        cout << "Enter your password:";
        cin >> password;
        if (Username!=username && password!=passcode)
        {

            cout << "login failed" << endl;
        }

        //  continue;

    } while (Username != username && password != passcode);
    cout << "login successful :)";
    ff << "Username:" << username << endl
       << endl
       << "Password:" << password << endl;
    ff.close();

    return 0;
}