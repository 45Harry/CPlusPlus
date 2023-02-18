#include <iostream>
using namespace std;
class figure{
    protected:
    float x,y;
    public:
    figure(float xx, float yy){
        x=xx;
        y=yy;
    }
    void display(){
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
    }
};
class rectangle: public figure{
    public:
    rectangle(float xx, float yy):figure(xx,yy)
    {

    }
    void area(){
        cout<<"Area of rectangle is "<<x*y<<endl;
    }
};
int main(){
    rectangle r(3,4);
    r.display();
    r.area();




    return 0;
}