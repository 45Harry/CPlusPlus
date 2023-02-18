#include <iostream>
using namespace std;
class parent
{
protected:
    int x, y;

public:
    void getdata()
    {
        cout << "Enter X";
        cin >> x;
        cout << "Enter y";
        cin >> y;
    }
};
class child1 : virtual public parent
{
 public:
    void display()
    {
        cout << "The area of rectangle is "  << x * y<<endl;
    }
};
class child2 : virtual public parent
{
public:
    void display()
    {
        cout << "Ehe areais " << x * y << endl;
    }
 };
class final : public child1, public child2
{
public:
    void display()
    {
        cout<<"Ehe areectangle is " << x * y;
    }
};
int main()
{
    final f;
    f.getdata();
    f.child2::display();
    f.display();

    return 0;
}