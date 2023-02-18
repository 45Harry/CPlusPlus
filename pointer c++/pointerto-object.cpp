#include<iostream>

using namespace std;
class Date{
    private:
    int year,month,day;
    public:
    void getData(){
        cout<<"Ente the Year ";
        cin>>year;
        cout<<"Enter the month ";
        cin>>month;
        cout<<"Enter the day ";
        cin>>day;
    }
    void showData(){
        cout<<"Your birthdate is "<<year<<"-"<<month<<"-"<<day;
    }
};
int main(){
Date *date;
date->getData();
date->showData();
return 0;


}