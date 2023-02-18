#include <iostream>
using namespace std;

class MyClass
{
public:
    void myFunction(string country = "Nepal")
    {
        cout << country << endl;
    }
};

int main()
{
    // string food = "pizza";  // reference in c++
    // string &meal = food;
    // cout << meal << "\n";
    // cout << food << "\n";
    // cout << &meal;
    // cout << &food;
    // // creating a pointer
    // string good = "milk";
    // string *thing = &good;
    // cout << good << "\n";
    // cout << thing << endl;
    // cout << *thing << endl;
    // cout << &good << endl;
    // // changing the pointer value
    // cout << "changed valur";
    // *thing = "curd";
    // cout << good << "\n";
    // cout << thing << endl;
    // cout << *thing << endl;
    // cout << &good << endl;
    MyClass obj;
    obj.myFunction();
    obj.myFunction("america");
    obj.myFunction("India");

    return 0;
}