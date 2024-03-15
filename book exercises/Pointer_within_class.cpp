// this program will use pointer within the class
#include <iostream>
using namespace std;
class Marks
{
private:
    float *ptr;
    int num;
    char name[35];

public:
    void noOfSubject() // ask user to enter the total number of subjects
    {
        cout << "Enter the number of subjects: ";
        cin >> num;
    }
    void readData();
    void displayData();
};
void Marks::readData()
{
    cout << "Enter Student Name: ";
    cin >> name;
    cout << "Enter Marks of " << num << " subjects: ";
    ptr = new float[num]; // allocates memory for num number of subjects
    for (int i = 0; i < num; i++)
    {
        cin >> ptr[i]; // ask user to enter marks in num number of subjects
    }
}
void Marks::displayData() // display the data for student
{
    float sum = 0, per;
    for (int i = 0; i < num; i++)
    {
        sum += ptr[i]; // calcultee sum of marks
    }
    per = sum / num; // calculte percentage
    cout << "Student Name: " << name << endl;
    cout << "Your percentage is: " << per << endl;
    delete[] ptr; // deletes the allocated memory
}
int main()
{
    Marks m1;
    m1.noOfSubject();
    m1.readData();
    m1.displayData();
    return 0;
}