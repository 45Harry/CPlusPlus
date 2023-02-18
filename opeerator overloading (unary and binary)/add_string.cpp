#include<iostream>
#include<string.h>

using namespace std;
class strings{
    private:
    char g[20];
    public:
    strings(){
        strcpy(g," ");
    }
    strings(char gg[]){
        strcpy(g,gg);
    }
    void show(){
        cout<<"The my name is "<<g<<endl;
    }
    friend strings operator+(strings str1,strings str2);
};
    strings operator+(strings str1,strings str2){
        strings temp;
        strcpy(temp.g,str1.g);
        strcat(temp.g,str2.g);
        return temp;
    }

int main(){
    strings str1("HARRY NARAYAN ");
    strings str2("SAH");
   // strings str3;
   strings str3=str1+str2;
    str3.show();
    return 0;



}