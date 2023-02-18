#include <iostream>

using namespace std;
class Distance
{
private:
    int feet;
    int inch;

public:
    void getdata()
    {
        cout << "Enter the distance in feet and inch.";
        cin >> feet >> inch;
    }
    void operator--(int)
    {
        feet--;
        inch--;
    }
    void showdata()
    {
        cout << "This is the distance after the post decrement " << feet << "'" << inch << "\"";
    }
};
int main()
{
    Distance d;
    d.getdata();
    d--;
    d.showdata();
    return 0;
}