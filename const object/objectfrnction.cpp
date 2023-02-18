#include<iostream>

using namespace std;
class Ttime{
    private:
    int hour;
    int minute;
    int sec;
    public:
    Ttime(int h, int m, int s){
     hour=h;
     minute=m;
     sec=s;
    }
    void showData()const{
        cout<<"******TIME******";
        cout<<"\nThe time you have intered is :"<<hour<<":"<<minute<<":"<<sec<<endl;
    }
};
int main(){
    const Ttime t(2,45,64); 
    t.showData();
    return 0;



}