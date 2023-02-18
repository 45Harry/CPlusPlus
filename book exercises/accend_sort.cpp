// program to allote memory for n number and ask user to enter n number and sort them in ascendint order
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int num;

    // ask user number of numbers to arranger or allote memory for
    cout << "Enter the number of memory you want to allocate: ";
    cin >> num;

    // to allote memory for n number or integer
    int *numbers = new int[num];
    // asking user to enter the each number and add it to the array
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " number :";
        cin >> numbers[i];
    }
    // sorting number in ascending order
    sort(numbers, numbers + num);

    // print the sorted number in ascending order
    cout << "Sorted numbers are: ";
    for (int i = 0; i < num; i++)
    {
        cout << " " << numbers[i];
    }
    // free the allocated memory
    delete[] numbers;
    return 0;
}