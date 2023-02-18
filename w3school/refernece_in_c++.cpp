#include <iostream>
#include <string.h>
using namespace std;
int main(){
    int x=45;
    int &t=x;
    string c="Harry Sah";
    string &d=c;
    cout<<"x="<<x<<endl;
    cout<<"x="<<t<<endl;
    cout<<"Name:"<<c<<endl;
    cout<<"Name:"<<d<<endl;


    return 0;
}