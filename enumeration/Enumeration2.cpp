// program to input days from user and displaly wheather it is holiday or not usn enumertion
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
    int day;
    cout << "Enter the day of the week: ";
    cin >> day;
    d = days(day);
    if (d == Sunday || d == Saturday)
    {
        cout << "Enjoy......Today is holiday";
    }
    else
        cout << "Sorry.....Working Day";

    return 0;
}