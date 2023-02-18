#include<iostream>
using namespace std;

int main(){
   //12 string msg[40]='The'
float num1,num2,result;
cout<<"Enter the two number:";
cin>>num1>>num2;
try{
    if(num2 !=0){
        result=num1/num2;
        cout<<"The result is "<<result;
    }
    else
    throw num2;
}
catch (float num2){
    cout<<"Please! Don't divide by "<<num2<<endl;
    cout<<"Try Again";
}
return 0;
}