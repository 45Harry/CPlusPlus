#include <iostream>

using namespace std;
class shape
{
protected:
    int l, b;

public:
    void getdata()
    {
        cout << "Enter the length and breadth.";
        cin >> l >> b;
    }
};
class rectangle : public shape
{
protected:
    float r;

public:
    void show()
    {
        cout << "The area of the rectangle is " << l * b;
    }
};
class circle : public rectangle
{
public:
    void getdata()
    {
        cout << endl<<"Enter the radius of the circle";
        cin >> r;
    }
    void show()
    {
        cout << "The area of the circle is " << r * r * 3.14;
    }
};
 int main()
{
    circle pp;
    pp.shape::getdata();
    pp.rectangle::show();
    pp.getdata();
    pp.show();
    

    return 0;
}