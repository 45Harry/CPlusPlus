#include <iostream>
using namespace std;
void myFunction(string name = "Harry")
{

    cout << name << endl;
}

int main()
{
    myFunction("mohan");
    myFunction("Rohan");
    myFunction();
    myFunction("selena");

    return 0;
}