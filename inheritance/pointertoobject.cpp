#include <iostream>
using namespace std;
class figure
{
protected:
    float dimension1, dimension2;

public:
    void getdata()
    {
        cout << "Enter the dimesnsion ";
        cin >> dimension1;
        cout << "Enter the dimesnsion ";
        cin >> dimension2;
    }
    // virtual void show()=0;
    void show()
    {
        cout << "'the area of rectangle is :" << dimension2 * dimension1 << endl;
    }
};
class Rectangle:public figure
{
public:
    void area()
    {
        cout << "'the area of rectangle is :" << dimension2 * dimension1 << endl;
    }
};
int main()
{
    figure *p;
    Rectangle r;
    p=&r;
    p->getdata();
    p->show();
    

    return 0;
}