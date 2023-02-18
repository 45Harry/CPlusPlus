// This progrma is example of array passing as an argument or parameter
#include <iostream>
using namespace std;
void myFunction(int numArray[])
{
    numArray[0] = 100;
    numArray[1] = 90;
    numArray[2] = 80;
    numArray[3] = 70;
    numArray[4] = 60;
    numArray[5] = 50;
    numArray[6] = 40;
    numArray[7] = 30;
    numArray[8] = 20;
    numArray[9] = 10;
    numArray[10] = 0;
}

int main()
{
    int arrayParameter[] = {2, 4, 5, 6, 8, 9, 9, 0, 4, 5};
    cout << "Value of array before passing it as argument " << endl;
    for (int i = 0; i < sizeof(arrayParameter) / sizeof(int); i++) // returns the length of an array
    {
        cout << arrayParameter[i] << "\t";
    }
    cout << "\n\n\nValue of array after passing it as argument " << endl;
    myFunction(arrayParameter);
    for (int i = 0; i < sizeof(arrayParameter) / sizeof(int); i++)
    {
        cout << arrayParameter[i] << "\t";
    }

    return 0;
}