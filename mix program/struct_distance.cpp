#include<iostream>
using namespace std;
struct distance{
    float feet;
    float inches;

};
struct distance add(struct distance D1,struct distance D2){
    struct distance temp;
    temp.feet=D1.feet+D2.feet;
    temp.inches=D1.inches+D2.inches;
    return temp;
}
int main(){
    struct distance D1,D2,D3;
    cout<<"Enter distance 1= ";
    cin>>D1.feet>>D1.inches;
    cout<<"Enter distance 2= ";
    cin>>D2.feet>>D2.inches;
    D3=add(D1,D2);
    if(D3.inches>=12){
    cout<<" The distnce is \n";
    cout<<D3.feet + 1<< "'"<<D3.inches - 12<<'"'<<endl;
    }
    else
    {
        cout<<" The distnce is \n";
    cout<<D3.feet<< "'"<<D3.inches<<'"'<<endl;
    }
    return 0;
    

}