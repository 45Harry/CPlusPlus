#include<iostream>
using namespace std;
class volume
{
    private:
    float l,b,h,v;
    public:
    void getdata(){
        cout<<"Enter the length, breadth and heignt";
        cin>>l>>b>>h;
    }
    void volume(){
        v=(l*b*h);
        cout<<"The volume of the box is:"<<v;
    }
};
int main(){
    volume b;
    b.getdata();
    b.volume();
    return 0;

}