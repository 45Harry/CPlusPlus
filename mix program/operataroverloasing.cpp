#include<iostream>

using namespace std;
class coordinate{
    private:
    int x;
    int y;
    public:
    coordinate(int xx, int yy){
        x=xx;
        y=yy;
    }
    void show(){
        cout<<"The coordinate after post increment is "<<"("<<x<<","<<y<<")"<<endl;
    }
    void show1(){
                cout<<"The given coordinate is "<<"("<<x<<","<<y<<")"<<endl;

    }
    void operator++(int){
        x++;
        y++;

    }
};
int main(){
coordinate c1(4,5);
c1.show1();
c1++;
c1.show();
return 0;


}