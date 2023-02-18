#include <iostream>

using namespace std;
class Circle
{
private:
    float r;

public:
    Circle(float ra)
    {
        r = ra;
    }
    friend void area(Circle c);
};
void area(Circle c)
{
    cout << "The area of circle is " << 3.14 * c.r * c.r << endl;
    
    cout << "The area of circle is " << 3.14 * c.r * c.r << endl;
}

int main()
{
    Circle p(1);

    area(p);
    return 0;
}