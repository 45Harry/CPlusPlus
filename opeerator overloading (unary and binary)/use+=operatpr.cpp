#include<iostream>

using namespace std;
class distancc{
   private:
   int x;
   int y;
   public:
   distancc(){
       x=0;
       y=0;
   }
   distancc(int xx, int yy){
       x=xx;
       y=yy;
   }
   void show(){
       cout<<"The distance after += is "<<"("<<x<<","<<y<<")"<<endl;
   }
   friend distancc operator+=(distancc d1,distancc d2);
};
   distancc operator+=(distancc d1 , distancc d2){
     distancc dd;

     dd.x=d1.x+=d2.x;
     dd.y=d1.y+=d2.y;
     return dd;
   }

int main(){
    distancc d1(3,2),d2(8,4);
    distancc d3=d1+=d2;
    d3.show();
    return 0;



}