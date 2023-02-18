#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string username;
  string passcode;
  string email;
  int age;
  string gender;
  fstream f("userdata.txt", ios::out);
  cout << "Create your username :) ";
  cin >> username;
  cout << "Enter our valid Email :) ";
  cin >> email;
  cout << "Enter your age :) ";
  cin >> age;
  cout << "Enter your gender :) ";
  cin >> gender;
  cout << "Enter your password :) ";
  cin >> passcode;
  f << username << endl
    << passcode << endl

    << email << endl
    << age << endl
    << gender << endl;
  f.close();
  cout << "Your account has been created";

  return 0;
}