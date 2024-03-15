// program that will illustrete passing of object of one class to another object
#include <iostream>
using namespace std;
class Birthday
{
    int day;
    int month;
    int year;

public:
    void getBirthday();
    void displayBirthday();
};
void Birthday::getBirthday() // gets dob from user
{
    cout << "Enter Day: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;
    cout << "Enter Year: ";
    cin >> year;
}
void Birthday::displayBirthday() // display dob
{
    cout << "Your Date of Birth is :";
    cout << day << "/" << month << "/" << year << endl;
}
class Employee
{
    char name[20];
    Birthday bob; // using object of birthday class as data member of employee class

public:
    void getPerson();
    void displayPerson();
};
void Employee::getPerson() // gets the details of the employee
{
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Date of Birth : " << endl;
    bob.getBirthday();
}
void Employee::displayPerson() // dislplay the details of the employee
{
    cout << "Name :" << name << endl;
    cout << "DOB  :";
    bob.displayBirthday();
}

int main()
{

    Employee emp;
    emp.getPerson();
    emp.displayPerson();

    return 0;
}