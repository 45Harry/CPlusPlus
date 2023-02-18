#include<iostream>
#include<math.h>
#define g 6.67*1000000000000
using namespace std;
int main(){ 
    //const float g=6.67/100000000000;
      double m1,m2,r,f,h,m;
    cout<<"Enter the mass of earth ?"<<endl;
    cin>>m1;
    cout<<"Enter the mass of object ?"<<endl;
    cin>>m2;
    cout<<"Enter the radius of earth ?"<<endl;
    cin>>r;
    f=(g*m1*m2);
    m=pow(r,2);
    h=f/m;
    cout<<"The required force between two object is :"<<h<<endl;
    return 0;
}