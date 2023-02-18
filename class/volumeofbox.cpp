#include<iostream>
using namespace std;
class box{
    private:
    float l,b,h;
    public:
    void getdata(){

        cout<<"Enter length";
        cin>> l;
        cout<<"Enter breadth";
        cin>> b;
        cout<<"Enter height";
        cin>> h;
        
    }
    void showdata(){
        
        cout<<"length is "<<l<<endl;
        cout<<"breadth is "<<b<<endl;
        cout<<"height is "<<h<<endl;
    }
    void volume();
};
void box::volume(){
    cout<<"the voume of box is "<<l*b*h<<endl;
}
int main(){
    box b1;
    b1.getdata();
    b1.showdata();
    b1.volume();
    return 0;
}