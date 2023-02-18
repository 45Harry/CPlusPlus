#include<iostream>

using namespace std;

class area
{
    private:
    float a,b;
    public:
    area(){
    a=12;
    b=33;
    }
    area(float aa,float bb)
    {a=aa;b=bb;}
  
    void area1()
    {cout<<"the area of rectangle is = "<<a*b<<endl;
    }
      ~area()
    {cout<<"the area of rectangle is ";
    }

};
int main()
{
    area a1;
    
    a1.area1();
    area a2(2,3);
    a2.area1();
    return 0;
}