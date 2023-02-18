#include <iostream>
using namespace std;
class rectalgle{
  
     private:
    float length, breadth, area, perimeter;
    public:
    void setData() {
        cout<<"Enter the length "<<endl;
        cin>>length;
        cout<<"Enter the breadth"<<endl;
        cin>>breadth; 
    }
    void areaData()
    {
        area= breadth*length;
        cout<<"The area of rectangle is "<< area <<endl;
    }
    void perimetere()
    {
        perimeter=2*(length + breadth);
        cout<<"the perimeter is "<<perimeter;
          
     }
};
int main()
{ 
    rectalgle s;
    s.setData();
    s.areaData();
    s.perimetere();
    
return 0;
        }

   
    
