#include<iostream>
using namespace std;
class ddistance
{
private:
    int ft,in;
public:
    ddistance()
    {
        ft=0;
        in=0;
    }
    ddistance (int feet,int inch)
    {
        ft=feet;
        in=inch;
    }
     void show()
     {
         cout<<ft<<"'"<<in<<"\" "<<endl;
     }
     
     void operator-= (ddistance d1)
{
         ft-=d1.ft;
         in-=d1.in;
     }
};
int main()
{
    ddistance p1(4,5);
    ddistance p2(3,6);
    p1 -= p2;
    p1.show();
    return 0;
}