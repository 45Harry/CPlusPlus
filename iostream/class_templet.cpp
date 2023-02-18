#include<iostream>
using namespace std;
template<class T>
class Rectangle{
    private:
T length,breadth;
public:
void getdata(){
    cout<<"Enter the lengte";
    cin>>length;
    cout<<"Enter the breadth";
    cin>>breadth;
}
void display(){
    cout<<"Length = "<<length<<endl;
    cout<<"breadth = "<<breadth<<endl;
}
};

int main(){
    Rectangle <float> r;
    r.getdata();
    r.display();

return 0;
}