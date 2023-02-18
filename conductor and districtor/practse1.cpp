#include<iostream>

using namespace std;
class introduction
{
    private :
    int a;
 int b;
    // char b[20];
    public:
    introduction(){
        a=1;
        b=5;
    // char b[20]="HarryShah";

    }
    introduction( int x, int y){
        a=x;
        // b[20]=p[20];
        b=y;
    }
    void display(){
        cout<<"the position and name is "<<a+b<<endl;
    }
~introduction(){
    cout<<"i'm done "<<a+b<<endl;
}
};
int main(){
    introduction info;
    info.display();
    introduction info2( 2, 5);
    info2.display(); 

    // introduction();

}