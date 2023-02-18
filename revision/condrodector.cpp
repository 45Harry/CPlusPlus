#include<iostream>

using namespace std;
class demo{
    private:
    float length;
    float breadth;
    public:
    demo(){
        length=3;
        breadth=6;
    }
    demo(float l, float b){
        length=l;
        breadth=b;
    }
    void showdata(){
        cout<<"The product of "<<length<<" and "<<breadth<<"  is  " <<length*breadth<<endl;
    }
    ~demo(){
        cout<<"am for the "<< length <<" and "<<breadth<< endl;
    }
};
int main(){
    demo d;
    d.showdata();
    demo d1(4,5);
    d1.showdata();
    return 0;



}