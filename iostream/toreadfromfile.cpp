#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream p;
    p.open("student.txt",ios::in);
    char name[10],address[10];
    int roll,marks[5];
    p>>name>>address>>roll>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
    p.close();
    cout<<"Name : "<<name<<endl;
    cout<<"Address : "<<address<<endl;
    cout<<"Roll :" <<roll<<endl;

return 0;
}