#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number to be checked?";
    cin>>num;
    if(num%3==0 && num%7==0){
        cout<<"The number is divisible by both 3 and 7.";
    }
    else if(num%3==0 && num%7!=0){
        cout<<"The number is divisible by 3 only.";
    
    }
    else if(num%7==0 && num%3!=0){
        cout<<"The number is divisible by 7 only.";
    }
    else {
        cout<<"The number is not divisible by both of the numbers56.";

    }
    return 0;
}