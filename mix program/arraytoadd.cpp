// program to add mutiple numbers using array
#include <iostream>  //input and output libirary
#include <windows.h> // using system from system library
using namespace std;
int main()            //main function starts from here  
{
 int a[5],i, h = 0; // array declaration 
 system("CLS");
    for (i = 0; i < 5; i++)
    { // to accept 20 number and store them in a
        cout << "Enter the " << i+1 << " number :  ";
        cin >> a[i]; //accets the numbers
        h = h + a[i]; // add the every number you enter
    }
    //  for(i=1;i<=20;i++){  // to add the enterd 20 numbers

    //    }
    cout << "The sum of 5 number is" << h << endl; //this will add all the five numbers
    return 0;
} //end of main function
