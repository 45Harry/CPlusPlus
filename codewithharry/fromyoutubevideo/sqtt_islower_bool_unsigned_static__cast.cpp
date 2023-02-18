#include <iostream>
#include <cmath>   // for sqrt
#include <iomanip> // for setw
#include <string>  // for string
#include <ctype.h> // for islower() function

using namespace std;

int main()
{
    //**********use of unsigned interer********************************
    // unsigned is used to store positive intizer only********************************
    //******* it store double than the normal int, as it only store positive valuer*****
    // unsigned int a=1500000000;
    // cout<<"The value of a usins unsigned int  is "<<a*2;

    //************sqrt and islower useses********************************
    // double number = 100;
    // char a;
    // cout << "The square root of 100  is " << sqrt(number) << "\nEnter the char to guss: "; //***the sqrt function
    // cin >> a;
    // cout << "The char you have enter is " << islower(a); //***the islower function
    // cout<<"beep it \a\b\r";

    //*********Boolen expression************
    // bool one=true;
    // if(one =2){
    //     cout<<"thie is true "<<one;
    // }

    //*******conversinon of int into float or vise vesa*******
    int i = 45;
    float f = 12.3333F;
    double d = static_cast<float>(i) * f;
    cout << "The value of d is  "<<d;
    return 0;
}