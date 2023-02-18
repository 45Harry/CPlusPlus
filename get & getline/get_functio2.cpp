// this progrma show the effect of get() functin for reading two value
#include <iostream>
using namespace std;

int main()
{
    char name[45], address[45];
    cout << "Enter your name: ";
    cin.get(name, 45);
    cout << "Enter your address: ";
    cin.get(address, 45);
    cout << "Your name is " << name << " and address is " << address;

    return 0;
}