#include<iostream>
using namespace std;
template <class t>
void swapp(t *p,t *q){
    t temp;
    temp =*p;
    *p=*q;
    *q=temp;

}

int main(){
float a=10.3,b=20.3;
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
swapp(&a,&b);
cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;

return 0;
}