// example program from book
#include <iostream>
using namespace std;
class Shape
{
    int dim1;
    int dim2;

public:
    Shape(int dim1)
    {
        this->dim1 = dim1;
    }
    Shape(int dim1, int dim2)
    {
        this->dim1 = dim1;
        this->dim2 = dim2;
    }
    int areaOfRectangle()
    {
        return dim1 * dim2;
    }
    int areaOfSquare()
    {
        return dim1 * dim1;
    }
};
int main()
{
    Shape dim1Obj1(5);
    Shape dim2Obj2(5, 5);
    cout << "The Area of square is: " << dim1Obj1.areaOfSquare() << endl;
    cout << "The Area of Rectangle is: " << dim2Obj2.areaOfRectangle() << endl;

    return 0;
}