#include <iostream>
using namespace std;
int a[]={11,12,13,14,15};
int& value(int i)
{
    return a[i];
}
int main(){
    int i;
    cout<<"a[0]="<<a[0]<<endl;
    value(0)=100;
    cout<<"a[0]="<<a[0]<<endl;
    return 0;
}