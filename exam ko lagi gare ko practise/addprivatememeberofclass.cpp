#include <iostream>

using namespace std;
class A;
class B;
class A
{
private:
    int a;

public:
    A(int aa)
    {
        a = aa;
    }
    friend void sum(A, B);
};
class B
{
private:
    int b;

public:
    B(int bb)
    {
        b = bb;
    }
    friend void sum(A, B);
};
void sum(A x, B y)
{
    cout << x.a + y.b;
}
int main()
{
    A xd(54);
    B yd(6);
    cout << "The sum of two of the private data member of two different class is ";
     sum(xd,yd);
    return 0;
}