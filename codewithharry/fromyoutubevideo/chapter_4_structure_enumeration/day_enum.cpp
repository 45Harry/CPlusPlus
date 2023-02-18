#include <iostream>

using namespace std;
enum days_of_week
{
    sun,
    mon,
    tue,
    wed,
    thu,
    fri,
    sat
}; // enum declaration

int main()
{
    days_of_week day1, day2; // define variables of enum declaration
    day1 = mon;
    day2 = thu;
    int diff = day2 - day1; // can do integer arithmetic
    cout << "Days between = " << diff << endl;
    if (day1 < day2) // can do comparisons
    {
        cout << "day1 comes before day2" << endl;
    }

    return 0;
}