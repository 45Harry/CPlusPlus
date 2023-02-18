#include<iostream>

using namespace std;
class complex {
    private:
    int real;
    int img;
    public:
    void getdata(){
        cout<<"enter the real number or part number ";
        cin>>real;
        cout<<"Enter the imiginary part number ";
        cin>>img;
    }
    void show(){
        cout<<"The complex number is "<<real<<" +"<<img<<"i"<<endl;
    }
  friend  complex operator +(complex c, complex c1);

};
complex operator +(complex c, complex c1){
    complex r;
    r.real=c.real+c1.real;
    r.img=c.img+c1.img;
    return r;

}
int main(){
    complex c,c1,r;
    c.getdata();
    c1.getdata();
   r= c+c1;
   r.show();
   return 0;




}