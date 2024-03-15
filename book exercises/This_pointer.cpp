// address of object using this pointer
#include <iostream>
using namespace std;
class Box
{
    float l, b, h;

public:
    void getAddress()
    {
        cout << "Address of object using this pointer: " << this << endl;
    }
};

int main()
{
    Box b;
    b.getAddress();
    cout << "Address of object directly " << &b;

    return 0;
}