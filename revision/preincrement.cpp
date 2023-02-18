#include <iostream>
using namespace std;
class pre{
    private:
    int x,y;
    public:
    void getdata(){
        cout<<"Enter the value of x";
        cin>>x;
        cout<<"Enter the value of y";
        cin>>y;
    }
    void show(){
        cout<<"The value of x and y is"<<x <<" "<<y;
    }
  void operator+=(pre d){
      x+=d.x;
     y+=d.y;
  }
};
int main(){
    pre p,p1;
    p.getdata();
    p1.getdata();
    p+=p1;
    p.show();
    



    return 0;
}