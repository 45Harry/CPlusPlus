#include<iostream>
using namespace std;
template<class p,class p1,class p2>
void show_size(p a,p1 b, p2 c){
    cout<<"size of a ="<<sizeof(a)<<"bytes"<<endl;
    cout<<"size of b ="<<sizeof(b)<<"bytes"<<endl;
    cout<<"size of c ="<<sizeof(c)<<"bytes"<<endl;
}

int main(){
    int i=34;
    string g="harry";
    float f= 34.434;
    show_size(i,g,f);

return 0;
}