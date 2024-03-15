// program to overload a unary minus operator using friend function
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
    friend Complex operator-(Complex);
    void display()
    {
        cout << "Real Part: " << real << endl;
        cout << "Imaginary Part: " << img << endl;
    }
};
Complex operator-(Complex c)
{
    Complex temp;
    temp.real = -c.real;
    temp.img = -c.img;
    return temp;
}

int main()
{
    Complex comp(4, 5), m_comp;
    cout << "The complex number is: " << endl;
    comp.display();
    m_comp = -comp; // same as m_comp=operator-(comp)
    cout << endl
         << "The Complex number after unary minus :" << endl;
    m_comp.display();

    return 0;
}