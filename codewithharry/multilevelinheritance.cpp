#include <iostream>
using namespace std;
class super
{
protected:
    int no;

public:
    void getdata()
    {
        cout << "Enter the serial number" << endl;
        cin >> no;
    }
};
class Base1 : public super
{
protected:
    char name[20];

public:
    void getdata()
    {
        cout << "Enter the name of employee" << endl;
        cin >> name;
    }
};
class Base2 : public Base1
{
protected:
    int salary;

public:
    void getdata()
    {
        cout << "Enter the salary for the employee" << endl;
        cin >> salary;
    }
    void show()
    {
        cout << "The serial nummer of the employee is " << no << endl;
        cout << "The name  of the employee is " << name << endl;
        cout << "The salary of the employee is " << salary << endl;
    }
};
int main()
{
    Base2 o;
    o.super::getdata();
    o.Base1::getdata();
    o.getdata();
    o.show();

    return 0;
}