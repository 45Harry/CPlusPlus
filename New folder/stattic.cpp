#include<iostream>

using namespace std;
class sta{
    private:
    int x;
    int y;
     static int count;
    public:
    void getdata(){
        cout<<"Enter the value of x and y "<<endl;;
        cin>>x>>y;
        count++;
    }
    void showdata(){
        cout<<"The coordinate is "<<"("<<x<<","<<y<<")"<<endl <<"This is coordinat no "<<count<<endl;
        
    }
};
int sta::count; //default value is zerp\o
int main(){
    sta p1,p2,p3;
    p1.getdata();
    p1.showdata();
     p2.getdata();
    p2.showdata();
     p3.getdata();
    p3.showdata();
    return 0;



}