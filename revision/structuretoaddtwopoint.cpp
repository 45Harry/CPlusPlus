#include<iostream>

using namespace std;
struct Distance
{
    float feet;
    float inch;
};
struct Distance add(Distance d1, Distance d2){
    Distance temp;
    temp.feet=d1.feet+d2.feet;
    temp.inch=d1.inch+d2.inch;
    if(temp.inch >= 12){
        temp.feet=temp.feet+1;
        temp.inch=temp.inch-12;
    }
    return temp;
}



int main(){
    Distance d1,d2,d3;
    cout<<"Enter the first point ";
    cin>>d1.feet>>d1.inch;
    cout<<"Enter the second point ";
    cin>>d2.feet>>d2.inch;
    d3=add(d1,d2);
    cout<<"The sum of two pint is\n\n "<<d3.feet<<"' "<<d3.inch<<"\"";
    return 0;




}