#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char name[10], address[10];
    int i, roll, marks[5];
    fstream f;
    f.open("student.txt", ios::out);
    cout << "Enter name";
    cin.getline(name,10);
    cout << "Enter the address";
    cin >> address;
    cout << "Enter roll:";
    cin >> roll;
    for (i = 0; i < 5; i++)
    {
        cout << "Enter marks in subject " << i +i<<" : ";
        cin >> marks[i];
    }
    f << name << endl
      << address << endl
      << roll << endl
      << marks[0] << endl
      << marks[1] << endl
      << marks[2] << endl
      << marks[3] << endl
      << marks[4] << endl;
    cout << "sucess" << endl;
    f.close();

    return 0;
}