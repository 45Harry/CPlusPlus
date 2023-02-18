#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream p;
    p.open("2file.txt",ios::out);
    p<<"Harry shah";
    cout<<"sucess";
    p.close();

return 0;
}