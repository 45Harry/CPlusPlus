// program to use this pointer to acess data member in member functonof class
#include <iostream>
using namespace std;
class Employee
{
    double salary;

public:
    void getSalary(double salary)
    {
        this->salary = salary;
    }
    void display()
    {
        cout << "\nThe salary: " << salary << endl;
    }
};

int main()
{
    Employee programmer;
    Employee manager;
    manager.getSalary(6000.0);
    programmer.getSalary(34000.0);
    manager.display();
    programmer.display();

    return 0;
}