#include<iostream>
using namespace std;
template<class I,class C>
 //class template with multiple parameter
 class myclass{
     public:
     I num;
     C cha;
     myclass(I a,C b){
         num=a;
         cha=b;
     }
     void display(){
         cout<<num<<endl<<cha<<endl;
     }
 };
int main(){
    myclass <int,char> obj(5,'H');
    obj.display();

return 0;
}