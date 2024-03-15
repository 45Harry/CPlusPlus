// program to overload logical not (i.e. !) operator
#include <iostream>
using namespace std;
class Coordinate
{
    int x, y;

public:
    Coordinate(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Coordinate()
    {
        x = 0;
        y = 0;
    }
    void readPoint()
    {
        cout << "Enter x and y coordinates: ";
        cin >> x >> y;
    }
    int operator!()
    {
        if (x == 0 && y == 0)
            return 1;

        else
            return 0;
    }
    void display()
    {
        cout << "The coordinate is :(" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Coordinate pt;
    pt.readPoint();
    if (!pt)
        cout << "The point is origin " << endl;
    else
        cout << "The point is not origin " << endl;
    pt.display();
    return 0;
}