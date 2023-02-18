#include <iostream>

using namespace std;

int main()
{ //************conditional operator
    // int age1 =0,age2;
    // int min;
    // cout<<"Enter your age : ";
    // cin>>age1>>age2;
    // min=(age1<age2) ? age1 : age2;   // conditional operator
    // cout<<"your are small "<<min<<endl;

    //*************unknown example**************
    for (int j = 8; j < 80; j++)
    {                                  // for every column
        char ch = (j % 8) ? ' ' : 'x'; // ch is 'x' if column is
        cout << ch;                    // multiple of 8, and ' ' (space) otherwise
    }
    return 0;
}