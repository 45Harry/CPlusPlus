#include<iostream>
using namespace std;
void swap(int *x,int *y);
int main(){
    int p=10,q=40;
    cout<<"p="<<p<<endl;
    cout<<"q="<<q<<endl;
    swap(&p,&q);
    cout<<"p="<<p<<endl;
    cout<<"q="<<q<<endl;
    return 0;

}
void swap(int *x, int *y){
    int temp;
    temp =*x;
    *x=*y;
    *y=temp;

}