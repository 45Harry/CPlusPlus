#include<iostream>
//  #define pi 3.14;
using namespace std;
class circle{
    private:
    float r;
    public:
    void getdata(){
        cout<<"Enter the radius";
        cin>>r;
    }
    void showdata(){
        cout<<"The radius you have entered is "<<r<<endl;
    }
    friend void area(circle c);
};
 void area(circle c )
 {
    cout<<"The radius of circle is "<<3.14*c.r*c.r;
    
}
int main(){
    circle k;
    k.getdata();
    k.showdata();
     area(k);
    return 0;



}   