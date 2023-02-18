#include<iostream>

using namespace std;
class coordinate{
    private:
    float x,y;
    public:
    coordinate(){
        x=0;
        y=0;
    }
    coordinate(float xx, float yy){
        x=xx;
        y=yy;

    }
    void show(){
        cout<<"x= "<<x<<endl;
        cout<<"y= "<<y<<endl;
    }
    friend  int operator --(coordinate &c1,int);
}; 
int operator --(coordinate &c1, int){
    c1.x--;
    c1.y--;
}
int main(){
    coordinate cc(3,4);
    cc.show();
    cc--;
    cc.show();
    return 0;



}