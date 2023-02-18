#include <iostream>

using namespace std;
class box
{
private:
    int l, b, h;

public:
    
    void display(){
        cout<<"The address 0f the object is  "<<this<<endl;
    }
};
 int main()
{
    box u,a;
   // u.getdata(3,3,4);
    u.display();
    a.display();
    return 0;
}