#include <iostream>

using namespace std;
class Date
{
private:
    int year, month, day;

public:
    Date( int  y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }
    void showData()
    {
        cout << "Your birthday is on :"<<year<<"-"<<month<<"-"<<day<<endl;
    }
    ~Date(){
        cout<<" This is my birthday";
    }
};

int main(){
Date d(2002,2,17);
d.showData();
return 0;

}