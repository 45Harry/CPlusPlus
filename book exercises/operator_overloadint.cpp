// program to overload a unary minus operator
#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    Complex(int r, int i)
    {
        real = r;
        img = i;
    }
    Complex()
    {
        real = 0;
        img = 0;
    }
    void operator-()
    {
        real = -real;
        img = -img;
    }
    void display()
    {
        cout << "Real part : " << real << endl;
        cout << "imgginary part : " << img << endl;
    }
};

int main()
{
    Complex comp(4, 5);
    cout << "The complex number is: " << endl;
    comp.display();
    -comp;
    cout << "The complex number after unary minusis: " << endl;
    comp.display();

    return 0;
}