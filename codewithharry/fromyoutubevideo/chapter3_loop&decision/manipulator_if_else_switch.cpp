#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // ***********************MANIPULATOR****************
    // int a,b,c;
    // cout<<"Enter the numbers:";
    // cin>>a>>b>>c;
    // cout<<"The value of a "<<setw(4)<<a<<endl;
    // cout<<"The value of b "<<setw(4)<<b<<endl;
    // cout<<"The value of c "<<setw(4)<<c<<endl;

    //******************IF ELSE && IF ELSE LADDER***********
    // int age;
    // cout<<"Enter the YOur age: ";
    // cin>>age;
    // if(age<18 && age>0){
    //   cout<<"Your are not eligible for driving licesence";
    //}
    // else if(age>60){
    //    cout<<"Your are too old for driving licesence";

    //}
    // else if(age==0){
    //   cout<<"Your are not born yet";
    //}
    // else{
    //  cout<<"Your are eligible for driving licesence";
    //}

    //**************************SWITCH STATEMENT***************************
    int choice;
    cout<<" 1.FASTCASH  2.WITHDRAWLS 3.QUAREies"<<endl;
    cout<<"Enter your choice:)";
    cin>>choice;
    switch(choice){
        case 1:
        {
            cout<<"Rs.1000\t Rs.2000 \t Rs.5000";
            break;
        }
        case 2:
        {
            cout<<"Enter the amount you want withdrawl";
            break;
        }
        case 3:
        {
            cout<<"Your bank balance is Rs.100000";
            break;
        }
        default:
        cout<<"Please! enter valid choice";
    }
        
    
        return 0;
}