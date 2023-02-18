#include <iostream>
using namespace std;
class shape
{
public:
    virtual void draw() = 0;
};
class triangle : public shape
{

public:
    void draw()
    {
        cout << "I am triangle"<<endl;
    }
};
class rectangle : public shape
{
public:
    void draw()
    {
        cout << "I am rectangle"<<endl;
    }
};
class circle : public shape
{

public:
    void draw()
    {
        cout << "I am circle"<<endl;
    }
};

int main()
{
    shape *p[3];
    triangle t;
    rectangle r;
    circle c;
    p[0] = &t;
    p[1] = &r;
    p[2] = &c;
    int i;
    for (i = 0; i < 3; i++)
        p[i]->draw();

    return 0;
}