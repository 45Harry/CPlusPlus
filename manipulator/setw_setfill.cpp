// this program is to illustrate tha example of setw and setfill manipulators
#include <iostream>

#include <iomanip>
using namespace std;

int main()
{
    int num = 5;
    cout << "The enterd number is" << setw(45) << setfill('$') << num << endl;
    double floooo = 45.6758924242;
    cout << "This value is setPrisicion seted " << setprecision(8) << floooo;

    return 0;
}