#include<iostream>
using namespace std;
//template using default parameters 
// default parameters can be changed too ifyou modify with new parameters , during object creation;
template<class T1=int, class T2=float,class T3=char>
class Harry{
    public:
    T1 a;
    T2 b;
    T3 c;
    Harry (T1 x, T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    Harry <>h(4,6.10,'A');
    h.display();
    cout<<"The value of a,band c after using multiple parameters"<<endl;
    Harry<int,char,float> g(4,'H',4.55);
    g.display();

return 0;
}