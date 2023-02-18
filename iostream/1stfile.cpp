#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream p("dcom.txt",ios::out);
    p<<"Hello Harry";
    cout<<"sucess";
    p.close();
    return 0;
}