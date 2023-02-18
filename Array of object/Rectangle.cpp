
#include<iostream>

using namespace std;
class Rectangle{
    private:
    float length,breadth;
    public:
    void getdata(){
        cout<<"Enter length ";
        cin>>length;
        cout<<"Enter breadth ";
        cin>>breadth;
    
    }
    void area(){
        cout<<"The area of rectangle is "<<length*breadth<<endl;
    }
};
int main(){
    Rectangle r[4];
    for(int i=0; i<4; i++){
        r[i].getdata();
        r[i].area();
    }
    return 0;



}