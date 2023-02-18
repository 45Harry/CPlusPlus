// to illustrate the use of setw and setfill manipulator
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num = 45;
    cout << "The value of num is" << setw(34) << setfill('@') << num;
    double decNum = 45.46456562435;
    cout << "\nThe value of decNum is" << setprecision(9) << decNum << endl;

    return 0;
}