#include<iostream>
using namespace std;
class vehicle
{
    private:
    char model_name[30];
    char num_plate[30];
    char color[23];
    public:
    void getdata(){
        cout<<"Enter the name , numberplate and colour";
        cin>>model_name>>num_plate>>color;
    }
    void horn(){
        cout<<"Beep!"<<endl;
   }
    void pause(){
       cout<<"Stop!";
    }
};
int main(){
    vehicle v;
    v.getdata();
    v.horn();
    v.pause();
    return 0;
}