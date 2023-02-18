#include <iostream>
using namespace std;
class ddistance
{
     int a;
     int b;

public:
     void getvalues()
     {
          cout << "Enter the coordinate ";
          cin>>a>>b;
     }
     void show()
     {
          cout <<"("<< a<<","<< b<<")"<<endl;
     }
     void friend operator++(ddistance &x); // Pass by reference
};
void operator++(ddistance &x){
     x.a = ++x.a; // Object name must be used as it is a friend function
     x.b =++x.b;
}
int main()
{
     ddistance x1;
     x1.getvalues();
     cout << "Before Overloading\n";
     x1.show();
     cout << "After Overloading \n";
     ++x1;
     x1.show();
     return 0;
}