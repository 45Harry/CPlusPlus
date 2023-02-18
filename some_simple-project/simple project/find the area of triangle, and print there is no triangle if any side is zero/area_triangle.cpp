#include<iostream>

using namespace std;

int main(){
    float baselength,height;
    cout<<"Enter the baselength and height of the triangle ";
    cin>>baselength>>height;
        if(baselength==0||height==0){
        cout<<"There are no triangles";
    }
    else {
        cout<<"The area of the triangle is "<<0.5*(baselength*height);
    }
    return 0;




}