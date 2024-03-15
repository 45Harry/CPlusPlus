// making two class the freind to each other
#include <iostream>
using namespace std;
class Peter; // class declaration of peter
class Harry
{
private:
    long int myNumber;

public:
    void getNum()
    {
        cout << "Enter your Number: ";
        cin >> myNumber;
    }
    void displayInfo(Peter); // passing class obj as parameters in function
};
class Peter
{
private:
    int myAge;
    char myName[30];

public:
    void getInfo()
    {
        cout << "Enter Your Name: ";
        cin >> myName;
        cout << "Enter Your Age: ";
        cin >> myAge;
    }
    friend class Harry; // harry class is freind of perter so each and every member of peter class includint private member can have acessed by harry class and it's members
};
void Harry::displayInfo(Peter H)
{
    cout << "Your Name: " << H.myName << endl;
    cout << "Your Age: " << H.myAge << endl;
    cout << "Your Number: " << myNumber << endl;
}

int main()
{
    Peter obj2;
    Harry obj;
    obj2.getInfo();
    obj.getNum();
    obj.displayInfo(obj2);
    return 0;
}