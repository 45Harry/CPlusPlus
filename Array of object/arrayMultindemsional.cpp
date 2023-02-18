// this is example for multidemsinal
#include <iostream>
using namespace std;

int main()
{
    int firstMatrix[2][3];
    int secondMatrix[2][3];
    int finalMatrix[2][3];
    cout << "Enter the First Matrix " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> firstMatrix[i][j];
            cout << "\t";
        }
        // cout << endl;
    }
    cout << "Enter the Second Matrix " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> secondMatrix[i][j];
            cout << "\t";
        }
        // cout << endl;
    }

    cout << "The first matrix is " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << firstMatrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "The second matrix is " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << secondMatrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "The sum of the two matrices is " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << firstMatrix[i][j] + secondMatrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}