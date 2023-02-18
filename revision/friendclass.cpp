#include <iostream>

using namespace std;
class ABC
{
private:
    int x;
    int y;

public:
    ABC()
    {
        x = 5;
        y = 6;
    }
    friend class SSS;
};
class SSS
{
    public:
    void showdata(ABC a)
    {
        cout << "The value of x is " << a.x;
        cout << "\n The value of y is " << a.y;
    }
};
int main()
{
    ABC a;
    SSS p;
    p.showdata(a);
    return 0;
}