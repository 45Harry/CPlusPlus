#include <iostream>

using namespace std;
class shape
{

protected:
    int l, b;

public:
    void getdata()
    {
        cout << "\nEnter the lenth ";
        cin >> l;
        cout << "Enter the breadth ";
        cin >> b;
    }
};
class triangle : public shape
{
public:
    float area()
    {
        cout << "The area of triangle is " << 0.5 * l * b << endl;
    }
};
class rectangle : public triangle
{
public:
    float area()
    {
        cout << "The area of rectangle is" << l * b;
    }
};
int main()
{
    rectangle r;
    r.getdata();
    r.area();
    triangle t;
    t.getdata();
    // cout<<"The area of triangle is "<<
    t.area();
    return 0;
}