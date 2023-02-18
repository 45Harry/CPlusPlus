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
        cout<<"The date is "<<year<<":"<<month<<":"<<day;
    }
};
int main(){
    date d;
    int i;
    fstream p("date.txt",ios::out);
    for(i=1;i<4;i++){
        d.getdata();
        p.write((char *) &d,sizeof(d));

    }
    cout<<"sucess";

};