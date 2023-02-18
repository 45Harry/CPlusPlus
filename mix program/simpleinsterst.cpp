#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float p,t,r,c,d,e;
    cout<<"Enter the principle?";
    cin>>p;
    cout<<"Enter the time?";
    cin>>t;
    cout<<"Enter the rate?";
    cin>>r;
    c=1+(r/100);
    d=pow(c,t);
    e=(d-1)*p;
    cout<<"The compount interest is :"<<e;
    return 0;
}