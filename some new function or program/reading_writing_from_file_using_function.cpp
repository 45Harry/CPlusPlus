// in the file we are gonna learn how we can easily write and read from the file using functin.read()and write().
// note read() and write() function write data in binary format

#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

class alan
{
private:
    string name, address;
    int age;
    string gender;

public:
    void getDetails()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Address: ";
        cin >> address;
        cout << "Gender: ";
        cin >> gender;
        cout << "Age: ";
        cin >> age;
    }
    void showDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
        cout << "Gender: " << gender << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    alan obj;
    //   char all[999];

    // file created for writing
    // ofstream details("file.txt", ios::app);
    // details.write((char *)&obj, sizeof(obj)); // to write in the file , this will store data in the binary formart
    // obj.getDetails();
    // details.close();
    // cout << "Done";
    //
    // opening file to read from the file
    ifstream gett("file.txt");
    while (!gett.eof())
    {
        gett.read((char *)&obj, sizeof(obj)); // reads from the file
        cout << "\n\n\n"
             << endl;
    }
    obj.showDetails();
    gett.close(); //
    return 0;
}