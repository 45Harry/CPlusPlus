#include <iostream>

using namespace std;
class demo
{
private:
    int x, y;

public:
    void getdata()
    {
        cout << "Enter the length ";
        cin >> x;
        cout << "Enter the breadth ";
        cin >> y;
    }

    void showdata()
    {
        cout << "The area of recatngle is " << x * y << endl;
        cout << "The perimeter of rectangle is " << 2 * (x + y) << endl;
    }
};

int main()
{
    int i;
demo d[3];
    for (i = 0; i < 3; i++)
    {
        d[i].getdata();
        d[i].showdata();
    }
    return 0;
}