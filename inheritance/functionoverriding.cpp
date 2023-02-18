#include <iostream>
using namespace std;
class person{
    protected:
    char name[30];
    public:
    void getdata(){
        cout<<"Enter Name:";
        cin.getline(name,30);
    }
};
class student: public person
{
    protected:
    int age;
    public:
    void getdata(){
        cout<<"Enter age :";
        cin>>age;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
};
int main(){
    student s;
    s.person::getdata();
    s.getdata();
    s.display();


    return 0;
}