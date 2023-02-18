// to illustrate the use and advantage of reference variabel
#include <iostream>
using namespace std;

int main()
{
    int myAge = 45;
    int &age = myAge;
    cout << "Age without refeence variable is " << myAge << endl;
    age = 46;
    cout << "Age with refeence variable is " << age << endl;
    cout << "Age without refeence variable is " << myAge << endl;

    return 0;
}