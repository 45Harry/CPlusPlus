// program to print the hole sentences in uppercase
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char sentence[100]; //
    // asking user to enter a sentence
    cout << "Enter your bio:" << endl;
    cin.getline(sentence, 100, '!'); // using geline funciton to get multiple line string until '!' is enterd
    // makes enterd sentenxe in upper letter
    strupr(sentence);
    // print  sentence in uppper case
    cout << "The above sentences in upper case are :";
    cout << sentence;

    return 0;
}