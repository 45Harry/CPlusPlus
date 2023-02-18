#include<iostream>
using namespace std;

int main(){
    string name="harry";
    string passcode="harry@123";
    string filename;
    string password;
    cout<<"Enter the file name";
    cin>>filename;
    cout<<endl<<"Enter the password";
    cin>>password;
   
    if(filename==name && password==passcode){
        cout<<"matched";

    }
    else
    cout<<"try again";

return 0;
}