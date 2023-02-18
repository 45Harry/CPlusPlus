#include <iostream>
#include <conio.h> // to make getche workable

using namespace std;

int main()
{
    long num[6]; // making int a lond with only capacity to store positive numbers double than long does
    cout << "Enter a single number ";
    for (int i = 1; i <= 6; i++)

    {

        num[i] = getche(); // will get a single number and store it in num varialle && basically it sotres ASCII value
    }
    cout << "\n"
         << "Number is ";
    for (int i = 1; i <= 6; i++)
    {
        cout << num[i] - 48; // will print the number that will be enterd // as it wil print ASCII value so it must be subtrected form 48 to get number that is entered
    }

    return 0;
}