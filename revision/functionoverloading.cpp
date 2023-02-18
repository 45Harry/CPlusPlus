#include <iostream>
using namespace std;
class shape{
    protected:
    char name[30];
    public:
    void getdata(){
        cout<<"Enter Name:";
        cin>>name;
    }
};
class xshape: public shape{
    protected:
    int no;
    public:
   void getdata(){ cout<<"Enter no";
    cin>>no;
}

};
int main(){
    xshape s;
    s.getdata();
    s.shape::getdata();




    return 0;
}