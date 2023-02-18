#include <iostream>

using namespace std;

int main()
{
    int fm[10][10], sm[10][10], rm[10][10];  //decllaring the matrix
    int r, c;
    cout << "Enter the number of row ";  //asking for the number of rows
    cin >> r;
    cout << "\nEnter the number of column "; //asking for the number of columns
    cin >> c;
    cout << "\nEnter the first matrix :)"<<endl;  //asking for the first matrix
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> fm[i][j];
        }
        cout << "\n";
    }
    cout << "\nEnter the second matrix"<<endl; //asking for the second matrix
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cin >> sm[i][j];
        }
        cout << "\n";
    }
    cout << "\nThe matrix you have enterd is "<<endl;  //the first matrix goees down here
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << fm[i][j]<<"\t";
        }
        cout << "\n";
    }
    cout << "\nThe second matrix you have enterd is "<<endl; //the second matrix goees down here
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << sm[i][j]<<"\t";
        }
        cout << "\n";
    }

    cout << "The sum of two matrix is " << endl;  //sum of the two matris is here
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            rm[i][j] = fm[i][j] + sm[i][j];
            cout << rm[i][j]<<"\t";
        }
        cout << "\n";
    }

    return 0;
}