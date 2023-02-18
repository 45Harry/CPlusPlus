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
    do{
    cout <<endl<< "Enter your username:";
    cin >> name;
    cout << "Enter your password:";
    cin >> password;

    if (name != username && password != userpass)
    {
        cout << "Login Failed" << endl;
        cout << "Please try again";
    }
  //  continue;
}while(name!=username && password!=userpass);
cout<<"Login successful :)";
    
        o << "username= " << name << endl
          << "password= " << password << endl;
    
    o.close();

    return 0;
}