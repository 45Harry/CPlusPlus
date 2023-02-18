// program to read number of subject and the marks of each subject.Displays their total and average .using DMA
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int *pointerVaraible, sum = 0, numOfSubject;
    float avg;
    cout << "Enter the number of subjects: ";
    cin >> numOfSubject;
    pointerVaraible = new int[numOfSubject];
    cout << "Enter the marks for each subject: ";
    for (int i = 0; i < numOfSubject; i++)
    {
        cin >> pointerVaraible[i];
        sum += pointerVaraible[i];
    }
    avg = sum / numOfSubject;
    cout << "The total marks is : " << sum << endl;
    cout << "The average marks of ";
    for (int i = 0; i < numOfSubject; i++)
    {
        cout << setw(4) << pointerVaraible[i];
    }
    cout << " is :" << avg << endl;
    delete[] pointerVaraible;

    return 0;
}