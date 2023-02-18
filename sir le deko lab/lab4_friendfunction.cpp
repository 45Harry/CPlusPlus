#include<iostream>

using namespace std;
class coordinate{
    private:
    int x,y;
    public:
    coordinate(){
        x=0;
        y=0;
    }
    coordinate(int xx,int yy){
        x=xx;
        y=yy;
    }
        void show(){
        cout<<"The given  coordinate is "<<"("<<x<<","<<y<<")"<<endl;}

    void showdata(){
        cout<<"The final coordinate is "<<"("<<x<<","<<y<<")"<<endl;
    }
    friend coordinate add(coordinate a, coordinate b);
};
coordinate add(coordinate a, coordinate b){
    coordinate temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}
int main(){
    coordinate a(3,4);
    a.show();
    coordinate b(4,5);
    b.show();
    coordinate c;
    c=add(a,b);
    c.showdata();
    return 0;



}