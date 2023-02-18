#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char data[10];
    ifstream alan;
    alan.open("date.txt");
    while(alan){
        alan>>data;
        cout<<data<<endl;
    }
    cout<<"Bye"<<endl;

return 0;
}