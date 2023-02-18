#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    char all[999];
    string name, address;
    int age;
    string gender;

    // cout << "Enter name: ";
    // cin >> name;
    // cout << "Address: ";
    // cin >> address;
    // cout << "Gender: ";
    // cin >> gender;
    // cout << "Age: ";
    // cin >> age;
    // ofstream storing("readingfile.txt");
    // storing << "\nName: " << name << "\nAddress: " << address << "\nGender: " << gender << "\nAge: " << age << endl;
    // storing.close();

    ifstream gett("readingfile.txt", ios::in);
    while (!gett.eof())
    {
        gett.getline(all, 999);
        cout << all << endl;
    }
    gett.close();
    return 0;
}
//int this program we saw how we can read from the file by using getline function that gets every line of the file and but for we have to store our data in format ginven in linenumber 21;