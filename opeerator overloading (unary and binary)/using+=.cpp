#include <iostream>

using namespace std;
class distancc
{
private:
    int x;
    int y;

public:
    distancc()
    {
        x = 0;
        y = 0;
    }
    distancc(int xx, int yy)
    {
        x = xx;
        y = yy;
    }
    void show()
    {
        cout << "The distance after += is "
             << "(" << x << "," << y << ")" << endl;
    }
    distancc operator+=(distancc d)
    {
        x += d.x;
        y += d.y;
    }
};

int main()
{
    distancc d(3, 2), d2(3, 4);
   d += d2;
    d.show();
    return 0;
}