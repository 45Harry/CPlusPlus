#include<iostream>
using namespace std;
class distanc
{
    private:
    float a,b;
    public:
    void getdistance(){
        cout<<"Enter the distance in feet and inches?";
        cin>>a>>b;
         }
    void showdistance(){
        cout<<"The distance is:"<<a<<"'"<<"feets"   <<'\t'<<   b    <<'"'<<"inchs";
    }
};
int main(){
    distanc d;
    d.getdistance();
    d.showdistance();
    return 0;
}