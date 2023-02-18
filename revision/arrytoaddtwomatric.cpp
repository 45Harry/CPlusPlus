#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int rows, columns, i, j;
    cout << "Enter rows";
    cin >> rows;
    cout << "Enter coumns";
    cin >> columns;
    cout << "\nEnter the first matrix.";
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        { // takes 1st matrix
            cin >> a[i][j];
        }
    }
    cout << "Enter second matrix";
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        { // takes 2nd matrix
            cin >> b[i][j];
        };
    }
    cout << "The first matris is:" << endl;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        { // display 1st matrix
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << "The second matrix is:" << endl;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        { // display 2nd matrix
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
    for (i = 1; i <= rows; i++)
    {
        for (i = 1; i <= columns; i++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    cout << "The sum of two matris is:" << endl; // display sum of two matrix
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= columns; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}