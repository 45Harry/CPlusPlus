#include<iostream>

using namespace std;
class booll{
    private:
    int feet;
    int inch;
    public:
    booll(){
        feet=0;
        inch=0;

    }
    booll(int ft, int inc){
        feet=ft;
        inch=inc;
    }
    void getdata(){
        cout<<"enter the feet and inch";
        cin>>feet>>inch;
        
    }
    friend bool operator <(booll b1,booll b2);

};
 bool operator <(booll b1,booll b2){
     int ff=b1.feet*12+b1.inch;
     int fff=b2.feet*12+b2.inch;
     if(ff<fff)
     return true;
     else
     return false;


}
int main(){
    booll b1;
    b1.getdata();
    booll b2;
    b2.getdata();
    cout<<(b1<b2);
    return 0;



}