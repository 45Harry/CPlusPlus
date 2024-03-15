// program to overload a binary plus operator for addition of two complex numbers
#include <iostream>
using namespace std;
class Complex
{
    float real, img;

public:
    Complex()
    {
        real = 0;
        img = 0;
    }
    Complex(float rel, float im)
    {
        real = rel;
        img = im;
    }
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, img + c.img); // return using temporary objects, coz it saves time and makes code look easy
    }
    void display()
    {
        cout << real << "+ j " << img << endl;
    }
};

int main()
{
    Complex C(4, 5), C1(2, 1), C2;
    C2 = C + C1; // sameas C.operator+(C1)
    C2.display();

    return 0;
}