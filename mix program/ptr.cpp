#include<iostream>
using namespace std;
int main(){
    int p,t,r,I,A;
    cout<<"Enter the principle ?";
    cin>>p;
    cout<<"Enter the time ?";
    cin>>t;
    cout<<"Enter the rate ?";
    cin>>r;
    I=(p*r*t)/100;
    A=I+p;
    cout<<"The interest amount is :"<<I<<endl;
    cout<<"The Total amount is :"<<A<<endl;
    return 0;

}