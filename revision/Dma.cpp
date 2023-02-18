// to illustrate the use of dma and find the ave of student marks
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int sum = 0, numSubject;
    float average;
    int *pointerVariable;
    cout << "Enter the number of subject: ";
    cin >> numSubject;
    pointerVariable = new int[numSubject];
    cout << "Enter the marks in different subject : " << endl;
    for (int i = 0; i < numSubject; i++)
    {
        cin >> pointerVariable[i];
        sum += pointerVariable[i];
    }
    average = sum / numSubject;
    cout << "The average marks of";
    for (int i = 0; i < numSubject; i++)
    {
        cout << setw(5) << pointerVariable[i];
    }
    cout << " is " << average << endl;

    return 0;
}