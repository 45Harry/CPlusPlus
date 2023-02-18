#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string username;
  string passcode;

    fstream f("data.txt", ios::out);

    cout << "username: ";
    cin>>username;
    cout << "passcode:";
    cin>>passcode;
    f <<username << passcode;

    f.close();
    cout<<"sucess";
    return 0;
}