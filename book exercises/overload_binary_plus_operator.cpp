// to evaluate following expression b=5+A , where A and B are ovject of a class Distance having members feet and inch and add 5 to each member of the object a
#include <iostream>
#include <conio.h>
using namespace std;
class Distance
{
private:
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void Display()
    {
        cout << feet << "\'" << inch << "\"";
    }
    friend Distance operator+(int, Distance);
};
Distance operator+(int n, Distance d)
{
    Distance temp;
    temp.feet = n + d.feet;
    temp.inch = n + d.inch;
    if (temp.inch >= 12)
    {
        temp.inch = temp.inch - 12;
        temp.feet = temp.feet + 1;
    }
    return temp;
}
int main()
{
    Distance B(5, 9), A;
    A = 5 + B; // same as operator+(5,B);
    cout << endl
         << "The original object is: ";
    B.Display();
    cout << endl
         << "New object after adding 5 is :";
    A.Display();

    return 0;
}