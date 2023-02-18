#include <iostream>
using namespace std;
class shape
{
public:
    virtual void show() = 0;
};
class rectangle : public shape
{

public:
    void show()
    {
        cout << "I am Rectangle" << endl;
    }
};
class triangle : public shape
{
public:
    void show()
    {
        cout << "I am Triangle" << endl;
    }
};
class circle : public shape
{
public:
    void show()
    {
        cout << "I am Circle" << endl;
    }
};
int main()
{
    shape *p[3];
    rectangle r;
    triangle t;
    circle c;
    p[0] = &r;
    p[1] = &t;
    p[2] = &c;
    int i;
    for (i = 0; i < 3; i++)
        p[i]->show();
    return 0;
}