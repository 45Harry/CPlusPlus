

#include <iostream>

using namespace std;
class Date
{
private:
    int year;
    int month;
    int day;

public:
   Date(){
       year=2003;
       month=4;
       day=17;
   }
    Date(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void showdata()
    {
        cout << " \nYour Birthday is on " << year << "-" << month << "-" << day;
    }
    ~Date(){
        cout<<"\nTHis is date of birth :)"<<year;
    }
};
int main()
{   
    Date o1;
    Date o(2002, 2, 17);

   // Date o;
   o1.showdata();
    o.showdata();
    return 0;
}