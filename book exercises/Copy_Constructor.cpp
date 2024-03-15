// this program illustrate the use of copy constructor
#include <iostream>
using namespace std;
class Box
{
private:
    float l, b, h;

public:
    Box(float len, float br, float he)
    {
        l = len;
        b = br;
        h = he;
    }
    Box(Box &obj2) // passing obj in a consttructor
    {
        l = obj2.l;
        b = obj2.b;
        h = obj2.h;
    }
    void displayMembers()
    {
        cout << "Length:" << l << endl;
        cout << "Breadth:" << b << endl;
        cout << "Height:" << h << endl;
    }
    float volume()
    {
        return l * b * h;
    }
};

int main()
{
    Box obj(4.0F, 5.0F, 6.0F);

    Box obj2(obj); // passing obj in a constructor
    obj2.displayMembers();
    float vol = obj2.volume();
    cout << "Volume is :" << vol;

    return 0;
}