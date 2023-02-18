#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int a[10][10], b[10][10], c[10][10]; //declaring max size of possible matrix
    int rows, colomn;
    cout << "Enter rows";
    cin >> rows;
    cout << "Enter column";
    cin >> colomn;
    cout << "Enter first matrix";
    for (i = 0; i < rows; i++) //enter first matrix here
    {
        for (j = 0; j < colomn; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 1; i < rows; i++)
    {
        for (j = 1; j < colomn; j++)
        {
            cout << a[i][j];
        }
        cout << "\t";
    }
    cout << "Enter second matrix";
    for (i = 0; i < rows; i++) //enter second matrix here
    {
        for (j = 0; j < colomn; j++)
        {
            cin >> b[i][j];
        }
    }
    for (i = 1; i < rows; i++)
    {
        for (j = 1; j < colomn; j++)
        {
            cout << b[i][j];
        }
        cout << "\t";
    }
    for (i = 0; i < rows; i++) //adding matris a and b
    {
        for (j = 0; j < colomn; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 0; i < rows; i++) //printin matrix c
    {
        for (j = 0; j < colomn; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}