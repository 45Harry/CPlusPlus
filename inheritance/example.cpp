#include <iostream>
using namespace std;
class person{
    public:
    virtual void getdata()=0;
    virtual void show()=0;
};
class student: public person{
    protected:
    char name[30];
    int age;
    public:
    void getdata(){
        cout<<"Enter the name";
        cin>>name;
        cout<<"Enter the age";
        cin>>age;
    }
    void show(){
        cout<<"Name: "  <<name;
        cout<<"    Age:"<<age;
    }
};
class employee: public person{
    protected:
    char name[30];
    int salary;
    public:
    void getdata(){
        cout<<endl<<"Enter the name ";
        cin>>name;
        cout<<"Enter the salary ";
        cin>>salary;
    }
    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"salary: "<<salary;
    }
};

int main(){
    person *p[2];
    student s;
    employee e;
    p[0]=&s;
    p[1]=&e;
    int i;
    for(i=0;i<2;i++){
        p[i]->getdata();
        p[i]->show();
    }
    return 0;
}