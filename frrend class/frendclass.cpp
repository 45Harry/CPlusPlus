#include<iostream>

using namespace std;
class ABC{
    private:
    int a,b;
    public:
    void getdata(){
        cout<<"enter the first number\n";
        cin>>a;
        cout<<"enter the second number\n";
        cin>>b;
    }
    friend class XYZ;
};
class XYZ{
    public:
    void add(ABC h){
        cout<<"the entered two number is "<<h.a<<" & "<<h.b<<endl;
        cout<<"the sum of two number is "<<h.a+h.b<<endl;
    }
};
int main(){
    ABC h;
    h.getdata();
    XYZ u;
    u.add(h);



}