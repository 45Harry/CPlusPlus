#include<iostream>
using namespace std;
int main(){
    Rectangle R1,R2;
    R1.getdata();
    R2.getdata();
    R1.showdata();
    R2.showdata();
    R1.area();
    R2.area();
}
class Rectangle{
    private:
    float l,b;
    public:
    void getdata(){
        cout<<"Enter the length";
        cin>>l;
        cout<<"Enter the breadth";
        cin>>b;
    }
    void showdata(){
        cout<<"Length is "<<l<<endl;
        cout<<"Breadth is "<<b<<endl;
    }
    void area();
};
void Rectangle::area(){
    cout<<"\nThe area of rectangle is "<<l*b;
    
}
