#include<iostream>

using namespace std;
class Area
{
    private:
    float radius;
    public:
    void getdata()
    {
        cout<<"Enter the radius of circle ";
        cin>>radius;
    }
    void showdata()
    {
        cout<<"The radius you have entered is :"<<radius<<endl;
    }
    friend void showarea(Area r);

};
void showarea(Area r){
    cout<<"The area of circle is : "<<3.14*r.radius*r.radius;
}
int main(){
    Area g;
    g.getdata();
    g.showdata();
    showarea(g);
    return 0;
}