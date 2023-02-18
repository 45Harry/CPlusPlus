#include <iostream>
using namespace std;
class goverment
{
protected:
    int salary;

public:
    void getdata()
    {
        cout << "Enter the salary for employee:   $";
        cin >> salary;
    }
};
class privatee : public goverment
{
protected:
    char c[19];

public:
    void getdata()
    {
        cout << "Enter the name of the company. ";
        cin >> c;
    }
    void show()
    {
        cout << "The salary for the company is:   $" << salary << endl;
    }
};
class publicc : public privatee
{
protected:
    int age;

public:
    void getdata()
    {
        cout << "Who else can apply for the job(Enter age). ";
        cin >> age;
    }
    void show()
    {
        cout << "The name of company - " << c << endl;
        cout << "The suitable age is - " << age << endl;
    }
};
int main()
{

    publicc pp;
    // g.getdata();
    pp.goverment::getdata();
    pp.privatee::getdata();
    pp.getdata();
    //   p.show();
    pp.privatee::show();
    pp.show();

    return 0;
}