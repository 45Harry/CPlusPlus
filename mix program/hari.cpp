
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

        do{
            cout << "Enter Year :";
            cin >> year;
            if(year > 2022){
                cout<<"! Invalid Input Please Try Again\n"<<endl;
                continue;
            }
            break;
        }while(year > 2022);


         do{
            cout << "Enter Month :";
            cin >> month;
            if(month>12){
                cout<<"! Invalid Input Please Try Again\n"<<endl;
                continue;
            }
            break;
        }while(month > 12);


         do{
            cout << "Enter Day :";
            cin >> day;
            if(day > 30){
                cout<<"! Invalid Input Please Try Again\n"<<endl;
                continue;
            }
            break;
        }while(day > 30);
    }



    void showdata()
    {
        cout << " \nYour Birthday is on " << year<< "-" << month << "-" << day;
    }
};
int main()
{
    Date b;
    b.getDate();
    b.showdata();
    return 0;
}
