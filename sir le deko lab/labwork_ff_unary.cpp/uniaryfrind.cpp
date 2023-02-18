#include <iostream>

using namespace std;
class unary
{
private:
    int a;

public:
    void getdata()
    {
        cout << "Enter The value of A ";
        cin >> a;
    }
    void showdata()
    {
        cout << "The value of a after increment is " << a;
    }
    friend void operator++(unary h);
};
void operator++(unary h)
{
    unary l;
    l.a = ++h.a;
    return l;
}

int main()
{
    unary j;
    j.getdata();
    operator++(j);
    j.showdata();
    return 0;
}