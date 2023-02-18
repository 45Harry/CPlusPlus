#include<iostream>

using namespace std;
class Date{
    private:
int year;
int month;
int Day;
public:
Date(){
    year=2002;
    month=2;
    Day=17;

}
Date(int y, int m , int d){
    year=y;
    month=m;
    Day=d;
}
void showData(){
    cout<<"when is your birthday ? "<<endl;
    cout<<"MY birthday is on "<<year<<"-"<<month<<"-"<<Day<<endl;
}
~Date(){
    cout<<"\nHAPPY BIRTHDAY";
}
};
int main(){
    Date a;
    a.showData();
    Date b(2002,2,17);
    b.showData();
    return 0;



}