#include <iostream>
using namespace std;

int main(){
    string food="fiskari";
    string* ptr=&food; //ponter *ptr stores the memory address of food and value
    cout<<food<<endl;   // outputs fishkari 
    cout<<&food<<endl;  // display the memory address of  food
    cout<<ptr<<endl;  // display the memory address of food with the use of pointer
    cout<<*ptr<<endl;  // outputs fishkari
// now changing the value of pointer
cout<<"after changing the value of ponter"<<endl;
    *ptr="ChickenVeg";
    cout<<*ptr<<endl;
    cout<<food<<endl;


    return 0;
}