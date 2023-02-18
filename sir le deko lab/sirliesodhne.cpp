#include<iostream>

using namespace std;
class coordinate{
    private:
    int x,y;
    public:
    void getdata(){
        cout<<"Enter x ";
        cin>>x;
        cout<<"Enter y ";
        cin>>y;
    }
    void showdata(){
        cout<<"The final coordinate is "<<"("<<x<<","<<y<<")";
    }
    friend coordinate add(coordinate a, coordinate b);
};
coordinate add(coordinate a, coordinate b){
    coordinate temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}
int main(){
    coordinate d1,d2;
    cout<<"Enter the first coordinate."<<endl;
    d1.getdata();
    cout<<"Enter the second coordinate."<<endl;
    d2.getdata();
    coordinate d3;
    d3=add(d1,d2);
    d3.showdata();
    return 0;



}