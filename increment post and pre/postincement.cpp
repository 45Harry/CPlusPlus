#include<iostream>

using namespace std;
class post{
    private:
    int x;
    int y;
    public:
    post(int xx, int yy){
        x=xx;
        y=yy;

    }
    void displayf(){
        cout<<"The given point is :"<<"("<<x<<","<<y<<")"<<endl;
    }
    void display(){
        cout<<"The final point is :"<<"("<<x<<","<<y<<")";
    }
    void operator ++(int)
    {
        x++;
        y++;
    }
};
int main(){
    post p(4,5);
    p.displayf();
    p++;
    p.display();
    return 0;



}