// multiplication operator to multiply each element of a matrix by three times
#include <iostream>
using namespace std;
class Matrix
{
private:
    int m[2][2];

public:
    void ReadMatrix()
    {
        cout << "Enter matrix of order 2*2 :" << endl;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> m[i][j];
            }
        }
    }
    void DisplayMatrix()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << "\t" << m[i][j];
            }
            cout << "\n";
        }
    }
    friend Matrix operator*(int, Matrix);
};
Matrix operator*(int factor, Matrix mat)
{
    Matrix temp;
    for (int i = 0; i < 2; i++)
        for (int j = 0; i < 2; j++)
            temp.m[i][j] = mat.m[i][j] * factor;
    return temp;
}

int main()
{
    Matrix mtr, ResultMtr;
    mtr.ReadMatrix();
    cout << "The original Matrix is: " << endl;
    mtr.DisplayMatrix();
    ResultMtr = 2 * mtr;
    cout << "The result afer multiplicaion by 3" << endl;
    ResultMtr.DisplayMatrix();
    return 0;
}