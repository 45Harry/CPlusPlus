#include<iostream>

using namespace std;
class demo{
    private:
    int k,i;
    public:
    void getdata(){
        cout<<"Enter the numbet to be added ";
        cin>>k;
        cout<<"Enter the small number to be added ";
        cin>>i;

    }
    void showdata(){
        cout<<"The sum of two number is "<<k+i<<endl;
    }
};
int main(){
    demo *p;
    p->getdata();
    p->showdata();
    return 0;



}