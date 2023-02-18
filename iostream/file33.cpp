
#include <iostream>
#include <fstream>
using namespace std;
class Time
{
private:
 int h,m,s;
public:
 Time()
 {
 h = 12;
 m = 12;
 s = 12;
 }
 Time(int hh, int mm, int ss)
 {
 h = hh;
 m = mm;
 s = ss;
 }
 void get_time()
 {
 cout<<"Enter hr, min, sec: ";
 cin>>h>>m>>s;
 }
 void display_time()
 {
 cout<<h<<" : "<<m<<" : "<<s<<endl;
 }
};
int main()
{
 Time t;
 int i;
 fstream qq;
 qq.open("time.txt",ios::out);
 for(i=0;i<5;i++)
 {
 t.get_time();
 qq.write((char *) &t, sizeof(t));
 }
 cout<<"SUCCESS"<<endl;
 return 0;
} 
