#include <iostream>
using namespace std;
struct practice
{
    float b;
    char h[20];
};
struct practice position(struct practice a)
{
    struct practice temp;
    temp.x = a.b;
    temp.y = a.h[20];
    return temp;
}
int main()
{
    struct practice a, m;
    cout << "enter the position";
    cin >> a.b;
    cout << "enter the name";
    cin >> a.h[20];
    m = position(a);
    cout << "the position and name is " << m.x<< m.y;

    return 0;
}