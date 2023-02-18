#include <iostream>

using namespace std;
#include <conio.h>  //for getche()
int main()
{
    int chcount = 0;  //to count letter
    int wdcount = 1; //to count word
    char ch ;
    cout << "enter a phrase";
    while (ch != '\r')  // loop until enter is typed
    {
        ch = getche();  //get a single char
        if (ch == ' ')  //if it's a space
            wdcount++;  // increment wdcount
        else
            chcount++;  //increment chcout
    }
    cout << "\nwords=" << wdcount << endl
         << "letter=" << (chcount) << endl;
    return 0;
}