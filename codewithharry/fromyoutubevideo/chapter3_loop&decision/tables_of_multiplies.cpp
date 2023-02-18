#include<iostream>
#include<iomanip>
using namespace std;

int main(){
int num;
int h=1;
cout<<"Enter the number whose tables of multiplies you want "; cin>>num; 
for(int i=1;i<=20;i++){
    for(int j=1;j<=10;j++){
        cout<<setw(5)<< num*h  <<" ";
        h++;
    }
    cout<<" \n ";
}
return 0;

}