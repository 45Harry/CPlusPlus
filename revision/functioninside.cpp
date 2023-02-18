#include<iostream>

using namespace std;
class simple
{
private:
    int x,y;
public:
    void getdata(){
        cout<<"Enter the x ";
        cin>>x;
        cout<<"\nEnter the y ";
        cin>>y;

    }
    void add();
   
};
 void simple:: add(){
    cout<<"the cordinate x and y is "<<x   <<y;
}

int main(){
    simple d;
    d.getdata();
    d.add();

    return 0;



}