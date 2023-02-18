#include<iostream>
using namespace std;
int main(){
    int a,b,c=0;
    for(a=5;a>=1;a--){
        for(b=1;b<=5;b++){
            c=c+2;
            cout<<c<<"\t"  ;
        }
        cout<<   endl;
    }
    return 0;

}