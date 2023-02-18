#include <iostream>
using namespace std;
int main()
{
    int i, j;
    int a[10][10], b[10][10];   //declaration of max size of matrix
    int rows, column;
    cout << "enter the rows;";
    cin >> rows;                 //enter number of rows
    cout << "enter the colum;";
    cin >> column;           //enter number of column
    cout << "Enter the matrix"<<endl;
    for (i = 1; i <= rows; i++)     //enter the matrix, of desire number of rows ans columns but <= 10.
    {
        for (j = 1; j <= column; j++)
        {
            cout<<"enter the element";   
            cin >> a[i][j];
        }
    }
    cout<<"The matrix you have enteres is "<<endl;
    for(i=1;i<=rows;i++){
    for(j=1;j<=column;j++){
        cout<<a[i][j]<<"\t";
    }
    cout<<"\n"; }
    cout << " The transpose of the matrix"<<" is "<<endl;

    for (j = 1; j <= column; j++)
    {
        for (i = 1; i <= rows; i++)
        {

            cout << a[i][j]<<"\t"; //displays the transpose of matrix that is , change the element of rows to columns
        }
        cout<<"\n";
    }
    return 0;
}
