
#include <iostream>
using namespace std;
class ddistance
{
private:
    float feet, inches;
public:
    ddistance()//Default Constructor
    {
        feet = 0;
        inches = 0;
    }
    ddistance(float f, float i)
    {
        feet = f;
        inches = i;
    }
    void showData()
    {
        cout<<feet<<"' "<<inches<<"\""<<endl;
    }
    friend ddistance add(ddistance a, ddistance b);
};
ddistance add(ddistance a, ddistance b)
{
    ddistance temp;
    temp.feet = a.feet + b.feet;
    temp.inches = a.inches + b.inches;
    if(temp.inches >= 12)
    {
        temp.feet = temp.feet + 1;
        temp.inches = temp.inches - 12;
    }
    return temp;
}
int main()
{
    ddistance d1(5,7);
    ddistance d2(5,8);
    ddistance d3;
    d3 = add(d1, d2);
    d3.showData();
    return 0;
}
