// program to illustrate the different types of constructor
#include <iostream>
using namespace std;
class Volume
{
    int length, breadth, height;

public:
    // Volume() // constructor with no arguments
    // {
    //     length = 5;
    //     breadth = 5;
    //     height = 5;
    // }
    // //    // Volume(int l, int b, int h) // constructor with argumentts
    //     {
    //         length = l;
    //         breadth = b;
    //         height = h;
    //     }
    Volume(int l = 5, int b = 5, int h = 5) // constructor with default argumentts
    {
        length = l;
        breadth = b;
        height = h;
    }
    void display()
    {
        cout << "Length is :" << length << endl;
        cout << "Breadth is :" << breadth << endl;
        cout << "Height is :" << height << endl;
    }
    int volumeOfCube()
    {
        return length * breadth * height;
    }
};

int main()
{
    // Volume obj;//constructor with no arguments
    // Volume obj(5, 5, 5);constructor with argumentts
    // Volume obj(6, 6, 6);//constructor with default argumentts
    obj.display();
    int vol = obj.volumeOfCube();
    cout << "The volume of cube is :" << vol;

    return 0;
}