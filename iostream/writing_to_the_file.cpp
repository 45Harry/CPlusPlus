#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int roll;
    char name[30], address[30];
    fstream f;
   f.open("student.txt",ios::out);
    cout << "Enter the student name:";
    cin >> name;
    cout << "Enter the address:";
    cin >> address;
    cout << "Enter the roll number:";
    cin >> roll;
    f<< name << endl
      << address << endl
      << roll;
    cout << "sucess";
    f.close();

    return 0;
}