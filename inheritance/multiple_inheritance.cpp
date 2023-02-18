#include <iostream>
#include <string>
using namespace std;
class Baseclass
{
protected:
    char name[35];
    string address;

public:
 virtual void getdata()
    {
        cout << "Enter your Name.";
        cin.getline(name, 35);
    }
    void display()
    {
        cout << "The name you have entered is " << name;
    }
};
class DerivedClass1 : public Baseclass
{
public:
    void getdata()
    {
        cout << "Enter your address.";
        getline(cin, address);
    }
    void display()
    {
        cout << "The name of your address has been changed to " << address << endl;
    }
};

int main()
{
    Baseclass *p;
    DerivedClass1 object1;
    p = &object1;
    p->getdata();
  //  P->display();
    return 0;
}