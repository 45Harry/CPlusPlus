#include<iostream>
using namespace std;
template <class T,class T2>
class Harry{
    public:
    T a;
    T2 b;
    Harry(T x, T2 y){
        a=x;
        b=y;
    }
    void display();
};
//template <class T,class T2>
//void Harry<T,T2>::display(){
  //  cout<<"The value of a= "<<a <<" b= "<<b;
//}
template<class T,class T2>
void display(T a,T2 b){
    cout<<"This is the first function"<<a<<endl<<b;
}
template<class T>
void display(T a){
    cout<<"This is the second template "<<a;
}
int main(){
    //Harry<float, int> o(4.5,5);
  //  o.display();
  display(5);

return 0;
}