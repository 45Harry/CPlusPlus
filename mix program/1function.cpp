#include<iostream>
using namespace std;
void avg();
int main(){
    cout<<"Wap to find avg of two number usig function :"<<endl<<endl;
    avg();
    return 0;
}
void avg(){
    float a,b,av;
    cout<<"Enter the first numbet.";
    cin>>a;
    cout<<endl<<"Enter the second number.";
    cin>>b;
    av=(a+b)/2;
    cout<<"The avg is:"<<av;

}