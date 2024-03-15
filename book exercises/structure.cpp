// program to demonstrate use of structure
#include <iostream>
#include <iomanip>
using namespace std;
struct student
{
    int rollNo;
    char name[20];
    int marks;
    char remarks;
};
// student s1, s2, s3;
// struct

int main()
{
    student s1;
    cout << "Enter RollNo:";
    cin >> s1.rollNo;
    cout << "Enter Name:";
    cin.getline(s1.name, 20), '#';
    cout << "Enter Marks:";
    cin >> s1.marks;
    cout << "Enter Remarks:";
    cin >> s1.remarks;
    cout << "RollNo" << setw(8) << "Name" << setw(8) << "Marks" << setw(10) << "Remarks" << endl;
    cout << s1.rollNo << setw(12) << s1.name << setw(8) << s1.marks << setw(8) << s1.remarks;
    return 0;
}