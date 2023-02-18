#include<iostream>
using namespace std;
class apple{
    private:
    int a,b;
    public:
    apple(){
        a=3;
        b=6;
    }
    apple(int x, int y){
        a=x;
        b=y;
    }
    void show(){
        cout<<"The sum of two number is"<<a+b<<endl;
    }
    ~apple(){
        cout<<"I'm done."<<endl;
    }
};
int main(){
    apple g;
    g.show();
    apple v(5,3);
    v.show();

return 0;
}