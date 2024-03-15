// Program to illustrate the use of class and access it member functions
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth; // we cant define these variable outside of the rectangel class

public:
    void getData()
    {
        cout << "Enter Length:";
        cin >> length;
        cout << "Enter Breadth:";
        cin >> breadth;
    }
    int calArea(); // this is funcitn prototype
};
int Rectangle::calArea() // function definition
{
    return length * breadth;
}

int main()
{
    Rectangle rect;
    rect.getData();
    int ara = rect.calArea();
    cout << "The area is " << ara;

    return 0;
}