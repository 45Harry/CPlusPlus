// program to return objuct from a function using this pointer
#include <iostream>
using namespace std;
class Distance
{
private:
    int x, y;

public:
    void getDistance();
    Distance addDistance(Distance d);
    void showDistance();
};
void Distance::getDistance()
{
    {
        cout << "Enter X : ";
        cin >> x;
        cout << "Enter Y : ";
        cin >> y;
    }
}
Distance Distance::addDistance(Distance d)
{
    x = x + d.x;
    y = y + d.y;
    return *this;
}
void Distance::showDistance()
{
    cout << "The final coordinates are :"
         << "(" << x << "," << y << ")" << endl;
}

int main()
{
    Distance first, second;
    first.getDistance();
    second.getDistance();
    first.addDistance(second);
    first.showDistance();

    return 0;
}