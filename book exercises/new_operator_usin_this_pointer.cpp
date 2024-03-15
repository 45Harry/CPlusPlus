// program to illustrate the use of destructor in program fro destroing variables created dynamically using new operator
#include <iostream>
using namespace std;
class Employee
{
private:
    /* data */
    int empid;
    string *pointer;

public:
    Employee(/* args */);

    void getEmpDetails();
    void displayEmpDetails();
    ~Employee();
};

Employee::Employee(/* args */)
{
    pointer = new string[5];
}
void Employee::getEmpDetails()
{

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter Employee " << i << " Name: ";
        cin >> pointer[i];
    }
}
void Employee::displayEmpDetails()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " employee is: " << pointer[i] << endl;
    }
}
Employee::~Employee()
{
    delete[] pointer;
    cout << "TAsk completed:)";
}

int main()
{
    Employee googleEmployee;
    googleEmployee.getEmpDetails();
    googleEmployee.displayEmpDetails();

    return 0;
}