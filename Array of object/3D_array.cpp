// this program illustrate an example of 3D-array
#include <iostream>
using namespace std;

int main()
{
    int threeDArray[2][2][2] = {{{2, 2}, {3, 3}}, {{4, 4}, {5, 5}}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << threeDArray[i][j][k];
                cout << "\n";
            }
        }
    }

    return 0;
}