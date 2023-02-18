#include<iostream>
#include<fstream>
using namespace std;
class date{
    private:
    int year,month,day;
    public:
    date(){
        year=0000;
        month=00;
        day=00;
    }
    date(int y,int m, int d){
        year=y;
        month=m;
        day=d;
    }
    void getdata(){
        cout<<"Enter the year:";
        cin>>year;
        cout<<"Enter the month:";
        cin>>month;
        cout<<"Enter the day:";
        cin>>day;
    }
    void showdata(){
        cout<<"The date is "<<year<<":"<<month<<":"<<day<<endl;
    }
};
int main(){
    date dd;
    fstream p("date.txt",ios::in);
    while(p.eof()==0){
        p.read((char *) &dd,sizeof(dd));
        dd.showdata();
    }
    return 0;
}