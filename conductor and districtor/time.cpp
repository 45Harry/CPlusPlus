#include <iostream>

using namespace std;
class time
{
private:
    int year;
    int month;
    int day;

public:
    time()
    {
        year = 1;
        month = 1;
        day = 1;
    }
    void getdata()
    {
        cout << "Enter the year.";
        cin >> year;
        if (year > 2022 || year > 1950)
        {
            cout << "ERROR! please enter the valid year :)"<<endl;
            cin>>year;
        }
        cout<< "Enter the month. ";
        cin >> month;
        if (month > 12)
        {
            cout << "ERROR! please enter the valid month :)"<<endl;
            cin>>month;
        }
        cout << "Enter the day. ";
        cin >> day;
        if (day > 32)
        {
            cout << "ERROR! please enter the valid day :)"<<endl;
            cin>>day;
        }
    }
    void showdata(){
    {
        cout << "The date is :" << year << "-" << month << "-" << day << endl;
    }
    }
    ~time()
    {
        cout << "Your birthday is on the above day :)";
    } 
    
};
int main()
{
    time t1;
    t1.getdata();
    t1.showdata();
    return 0;
}