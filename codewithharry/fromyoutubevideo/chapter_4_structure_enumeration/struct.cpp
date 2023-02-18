#include <iostream>

using namespace std;
struct info
{
    int age;
    char name[20];
    unsigned long int phone;
    char email[40];
    char address[30];
};
int main()
{
    info student;

    cout << "\nEnter the name of student ";
    cin >> student.name;
    cout << "Enter the age of student ";
    cin >> student.age;
    cout << "Enter the address of student ";
    cin >> student.address;
    cout << "Enter the email of student ";
    cin >> student.email;
    cout << "Enter the phone of student ";
    cin >> student.phone;
 //****The 
    cout << "The name of the student is " << student.name << endl;
    cout << "The email of the student " << student.email << endl;
    cout << "The phone of the student " << student.phone << endl;
    cout << "The address of the student " << student.address << endl;
    cout << "The age of the student " << student.age << endl;

    return 0;
}