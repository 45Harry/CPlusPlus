#include<iostream>
using namespace std;
float avg(float *a,float *b)
{
    return (*a+*b)/2;
}
int main(){
    float x=10,y=18;
   // avg(a,b);
    cout<<"the average is"<<avg(&x,&y)<<endl;
    return 0;
}
