// program to read n number from user and find max or min number among them using concept of array
#include <iostream>
using namespace std;

int main()
{
    int n;
    int num[100];

    int max;
    // asking user number of  integer
    cout << "Enter the number of number you want to enter ";
    cin >> n;
    // Getting n integer from user
    cout << "Now! Enter those numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    // print the numbers entered by the user
    cout << "\n Those numbers are: ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << endl;
    }
    max = num[0];
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max) // here it will compare each value with new value and if the new value is greater than it is assigned to new max.....
        {
            max = num[i];
        }
    }
    // print the max value
    cout << "\nThe maxium value :" << max << endl;

    return 0;
}