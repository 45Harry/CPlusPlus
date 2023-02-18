// this program illustrate the use of getfunction
#include <iostream>
using namespace std;

int main()
{
    char name[40];
    cout << "Ente your full name: ";
    cin.get(name, 40, '#');//# here helps us to get multiple line string and it act as a delimiter 
    cout << "Your full name is: " << name;

    return 0;
}