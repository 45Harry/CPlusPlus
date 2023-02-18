#include <iostream>

using namespace std;
class Date
{
private:
    int year;
    int month;
    int day;

public:
    void getDate()
    {
        cout << "ENTER YOUR DATE OF BIRDTH ?\n";
        cout << "Enter Year ";
        cin >> year;
        if (year > 2022)
        {
            cout << "Error! Please enter valid year :) " ;
            cout << "Enter Year ";
            cin >> year;
        }
        cout << "Enter Month ";
        cin >> month;
        if (month > 12)
        {
            cout << "Error! please enter valid month :) \n";
            cout << "Enter Month";
            cin >> month;
        }

        cout << "Enter Day ";
        cin >> day;
        if (day > 32)
        {
            cout << "Error! Please enter valid day :) \n";
            cout << "Enter Day ";
            cin >> day;
        }
    }
    void showdata()
    {
        cout << " \nYour Birthday is on " << year << "-" << month << "-" << day;
    }
};
int main()
{
    Date b;
    b.getDate();
    b.showdata();
    return 0;
}