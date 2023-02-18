#include<iostream>

using namespace std;
class kistance{
    private:
    float ft;
    float inch;
    public:
    kistance(){
        ft=0;
        inch=0;

    }
    kistance( float f, float in){
        ft=f;
        inch=in;
    }
    void showdata(){
        cout<<ft<<"' "<<inch<<"\""<<endl;
    }
    friend bool operator <(kistance d1, kistance d2);

};

bool  operator <(kistance d1, kistance d2){
    float s1=d1.ft*12+d1.inch;
    float s2=d2.ft*12+d2.inch;
    if(s1<s2)
    return true;
    else
    return false;
}


int main(){
    kistance p1(9,5);
    kistance p2(5,4);
    cout<<(p1<p2)<<endl;
    return 0;



}