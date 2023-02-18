// to enter the day number and check for the holiday
#include <iostream>
using namespace std;

int main()
{
    enum days
    {
        Sunday = 1,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    days d;
    int dayNum;
    cout << "Enter the Day number (1-7)";
    cin >> dayNum;
    d = days(dayNum);

    if (d == Sunday || d == Saturday)
    {
        cout << "YAY...its a holiday:)" << endl;
    }
    else
    {
        cout << "Sorry...Working Day";
    }

    return 0;
}