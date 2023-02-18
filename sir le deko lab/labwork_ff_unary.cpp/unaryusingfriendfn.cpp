#include <iostream>

using namespace std;
class unary
{
private:
    int x;
    int y;

public:
    void getdata()
    {
        cout << "Enter the x ";
        cin >> x;
        cout << "Enter the y ";
        cin >> y;
    }
    void showdata()
    {
        cout << "The point after the pre increment is "
             << "(" << x << "," << y << ")";
    }
    friend int  operator++(unary &a);
};
 int operator++(unary &a)
{
     
    a.x++;
    a.y++;

}

int main()
{
    unary t;
    t.getdata();
    ++t;
    t.showdata();

    return 0;
}