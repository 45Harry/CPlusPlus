#include <iostream>
using namespace std;
class TheClass
{
private:
    int myAge = 21;
    string myName = "Harry";

public:
    void myDetails()
    {

        // cout << "My Name Is :" << myName << endl;
        // cout << "My Age Is :" << myAge << endl;
        cout << "Hello World!";
    }
};
// void TheClass::myDetails()

int main()
{
    TheClass myInfo;
    // cout << "Enter your sweet name? " << endl;
    // cin >> myInfo.myName;
    // cout << "Enter your age?" << endl;
    // cin >> myInfo.myAge;
    myInfo.myDetails();

    return 0;
}