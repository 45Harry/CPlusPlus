// program to illustrate the use of friend function
#include <iostream>
using namespace std;
class Circle
{
private:
    float radius;

public:
    void getRadius()
    {
        cout << "Enter Radius:";
        cin >> radius;
    }
    friend void displayArea(Circle);
};
void displayArea(Circle A1)
{
    float AA = A1.radius * 3.14 * A1.radius;
    cout << "The Area of circle is:" << AA << endl;
}
int main()
{
    Circle A1;
    A1.getRadius();
    displayArea(A1);

    return 0;
}