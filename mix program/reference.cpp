#include <iostream>
using namespace std;
int add(int x, int y)
{
    return (x + y);
}
float add(float a, float b, float c)
{
    return (a + b + c);
}
int main()
{
    int a, b;
    float p, q, r;
    cout << "Enter the two integer "<<endl;
    cin >> a >> b;
    cout << "Enter the three float "<<endl;
    cin >> p >> q >> r;
    cout << "Adding two number using reference " << endl; //function over loading
    cout << "The sum is =" << add(a, b);
    cout << "\n"
         << "The sum is =" << add(p, q, r);
    return 0;
}