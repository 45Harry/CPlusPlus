#include<iostream>

using namespace std;
class perimeter{
    private:
    float l,b;
    public:
    perimeter(){
        l=10;
        b=40;
    }
    perimeter(float x,float y){
        l=x;
        b=y;
    }
    void showdata(){
        cout<<"The preimeter of rectangle is "<<l+b<<endl;


    }
    int ill(){
        cout<<"the is for"<<l<<endl;

    }
    ~perimeter(){
        cout<<"i'm good  "<<endl;
        ill();

    }
};
int main(){
perimeter d;
d.showdata();
perimeter d2(99,111);
d2.showdata();
return 0;


}