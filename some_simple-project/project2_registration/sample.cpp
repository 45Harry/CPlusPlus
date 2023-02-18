#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  string username;
  string passcode;

    fstream f("data.txt", ios::in);
    f >> username >> passcode;

    cout << "username: " << username << endl;
    cout << "passcode: " << passcode << endl;

    f.close();
    
    return 0;
}