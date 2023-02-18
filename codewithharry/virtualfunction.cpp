#include<iostream>
using namespace std;
class person{
    protected:
    char fname[20];
   public:
    virtual void show()=0;
    virtual void getdata()=0;
};
class student:public person{
    protected:
    int roll;
    public:
    void show(){
        cout<<"STUDENT NAME: "<<fname<<endl;
        cout<<"STUDENT ROLL: "<<roll<<endl;
    }
    void getdata(){
        cout<<"Enter Student Name: ";
        cin>>fname;
        cout<<"Enter roll: ";
        cin>>roll;
    }
};
int main(){
    person* base_class_pointer;
    student d;
    base_class_pointer =&d;
    base_class_pointer->getdata();
    base_class_pointer->show();



return 0;
}