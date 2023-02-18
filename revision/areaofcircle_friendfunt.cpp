#include<iostream>

using namespace std;
class circle{
    private:
    float r;
    public:
    void getdata(){
        cout<<"Enter RAdius ";
        cin>>r;
    }
    friend void area(circle c);
};
void  area(circle c){
    cout<<"The area of circle is "<<3.14*c.r*c.r;
}
int main(){
    circle d;
    d.getdata();
    area(d);     //valur of r comes from the ovject d
    return 0;



}