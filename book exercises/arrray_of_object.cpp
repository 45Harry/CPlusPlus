// this program will illustrate the array of object
#include <iostream>
#include <iomanip>
using namespace std;
class Employee
{
private:
    int ID;
    char name[30];
    double salary;

public:
    void readData(int n)
    {
        cout << "Enter ID,Name and Salary of employee #" << n << ":";
        cin >> ID >> name >> salary;
    }
    void displayData()
    {
        cout << endl
             << ID << setw(10) << name << setw(10) << salary;
    }
};
int main()
{
    Employee emp[4]; // this is array of object
    for (int i = 0; i < 4; i++)
    {
        emp[i].readData(i + 1); // Reads data for 4 object
    }

    cout << endl
         << "*******Records of Employee***********" << endl;
    cout << "ID" << setw(10) << "Name" << setw(10) << "Salary";
    for (int i = 0; i < 4; i++)
    {
        emp[i].displayData(); // displya data for every objects
    }
    return 0;
}