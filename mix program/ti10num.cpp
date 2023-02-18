#include<iostream>
using namespace std;
int main(){
    int p[10],a;
    cout<<"Enter the ten number";
    for(a=1;a<=10;a++){
        cin>>p[a];
    }
    cout<<"The 10 numbers are :";
    for(a=1;a<=10;a++){
        cout<<endl<<p[a];
    }
return 0;

}