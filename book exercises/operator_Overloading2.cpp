// program thatoperator function ruturns object of type Complex
#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int r, int i);
    Complex();
    Complex operator-();
    void display();
};

Complex::Complex(int r, int i)
{
    real = r;
    img = i;
}

Complex::Complex()
{
    real = 0;
    img = 0;
}
Complex Complex::operator-() // unary operator minus || operator function
{
    Complex temp; // temp object to store new real and img values
    temp.real = -real;
    temp.img = -img;
    return temp;
}
void Complex::display()
{
    cout << "Real Part: " << real << endl;
    cout << "Imaginary Part: " << img << endl;
}

int main()
{
    Complex comp1(4, 5), comp2;
    cout << "The complex number is: " << endl;
    comp1.display();
    comp2 = -comp1;
    cout << "The complex number after uniray minus is: " << endl;
    comp2.display();

    return 0;
}