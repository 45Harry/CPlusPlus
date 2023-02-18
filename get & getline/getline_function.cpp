// this is the program that illustrate the use and advantage of usint getline function over get()
#include <iostream>
using namespace std;

int main()
{
    char name[45], address[45];
    cout << "Enter your name: ";
    cin.getline(name, 45);
    cout << "Enter your address: ";
    cin.getline(address, 45);
    cout << "Your name is " << name << " and address is " << address;

    return 0;
}
