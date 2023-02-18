#include <iostream>

using namespace std;
#include <conio.h> //for getche()
enum itsword
{
    NO,
    YES
};
int main()
{
    itsword isword = NO; // yes when in word || no when in whitespace
    char ch;             // character read from keyboard
    int wordcount = 0;   // number of words read
    cout << "Enter a phrase:\n";
    do
    {
        ch = getche();               // get character read from keyboard
        if (ch == ' ' || ch == '\r') // if white space
        {
            if (isword == YES) // and doing a word
            {                  // then it's end of word
                wordcount++;   // coutnthe word
                isword = NO;   // reset flag
            }
        } // otherwise it's normal character if start of word, then set flag
        else
        {
            if (isword == NO)
            {
                isword = YES;
            }
        }
    } while (ch != '\r'); // quit onEnter key
    cout << "\n---Word coutnt is " << wordcount << "----\n";
    return 0;
}