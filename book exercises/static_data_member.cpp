// Program to illustrate the use of static data member in class
#include <iostream>
using namespace std;
class Book
{
private:
    static int cn;
    char name[30];
    int id;

public:
    void ReadData() // reads data form user
    {
        cout << "\nEnter ID:";
        cin >> id;
        cout << "Enter name Of Book:";
        cin >> name;
        cn++; // increase the value of cn each the any of the object calls it
    }
    void display() // display the data
    {
        cout << endl
             << id << "\t" << name;
    }
    void displayCount() // count the number of object called readData()
    {
        cout << "The number of objects which called ReadData(): " << cn;
    }
};
int Book::cn;
int main()
{
    Book o1, o2, o3, o4; // 4 objects are created
    // clrscr();
    o1.ReadData();
    o1.displayCount();

    o2.ReadData();
    o2.displayCount();

    o3.ReadData();
    o3.displayCount();

    o4.ReadData();
    o4.displayCount();
    cout << endl
         << "ID\t"
         << "Name:";
    cout << endl
         << "_____________________________________";
    o1.display();
    o2.display();
    o3.display();
    o4.display();

    return 0;
}