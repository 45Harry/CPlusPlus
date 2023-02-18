#include<iostream>
using namespace std;
int main(){
    long int a=1,b=1,i;
    for(i=1;i<=7;i++){
        cout<<a<<"\t";
        cout<<b<<"\t";
        a=a+b;
        b=a+b;
    };
    return 0;

}