#include <iostream>

using namespace std;
class coordinate
{
private:
    int x;
    int y;

public:
    void getdata()
    {
        cout << "Enter the value of x and y ";
        cin >> x >> y;
    }
    void showdata()
    {
        cout << "The final coordiate is "
             << "(" << x << "," << y << ")" << endl;
    }
    void operator+=(coordinate c1)
    {
        x += c1.x;
        y += c1.y;
    }
};
int main()
{
    coordinate d, c1;
    d.getdata();
    c1.getdata();
    d += c1;
    d.showdata();
    return 0;
}