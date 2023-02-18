#include<iostream>
using namespace std;
struct point{
    float x;
    float y;

};
struct point add(struct point p1, struct point p2)
{
    struct point temp;
    temp.x=p1.x+p2.x;
    temp.y=p1.y+p2.y;
    return temp;
}
int main (){
    struct point p1,p2,p3;
    cout<<"Enter point 1 : ";
    cin>>p1.x>>p1.y;
    cout<<"Enter point 2 : ";
    cin>>p2.x>>p2.y;
    p3=add(p1,p2);
    cout<<"point 3 is \n";
    cout<<"("<<p3.x<<","<<p3.y<<")"<<endl;
    return 0;
}