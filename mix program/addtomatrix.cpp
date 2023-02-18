#include <iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j;
    int rows, colomn;
    cout << "Enter the number of rows.";
    cin >> rows;
    cout << "Enter the number of colonn.";
    cin >> colomn;
    cout << "Enter the first matrix." //first matrix is here
         << "\n";
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= colomn; j++)
        {
            cout << "The" << j << "st element is ";
            cin >> a[i][j];
        }
    }
    cout << "the first matrix you entered is" //first matrix is here to be printed
         << "\n";
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= colomn; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl
         << "Enter the second matrix." //entee the second matrix
         << "\n";
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= colomn; j++)
        {
            cout
                << "The " << j << "st element is";
            cin >> b[i][j];
        }
    }
    cout << "the second matrix you entered is" //second  matrix is here to be printed
         << "\n";
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= colomn; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }
    cout << endl
         << "The sum of first and second matrix is" << endl; // sum of the a and b matrix
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= colomn; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (i = 1; i <= rows; i++) //printin c=a+b
    {
        for (j = 1; j <= colomn; j++)
        {
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}