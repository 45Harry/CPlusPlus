#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    for (int i = 1; i < 10; i+=2)
    {
        for (int j = 1; j <= i; j++)
        {for (int k = 1; k <= j; k++){
            cout<<" ";
        }
            cout<<"X ";

        }
        cout<<endl;
    }
    return 0;
}