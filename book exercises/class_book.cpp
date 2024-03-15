// program which has clas book with data members book_name,isbn,author&price and appropriate function members to read and display dadtamembers.use this class to read records of ten bookr and dispay in tabular format
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class Book
{
    char book_name[50];
    char book_Author[40];
    int price;

public:
    void getBookDetails()
    {
        cout << "Enter Book Name: ";
        cin >> book_name;
        cout << "Enter Author Name: ";
        cin >> book_Author;
        cout << "Enter Price: ";
        cin >> price;
    }
    void displayBookDetails()
    {
        cout << setw(20) << book_name << setw(20) << book_Author << setw(20) << price << endl;
    }
};

int main()
{
    Book bookObject[4];
    cout << "Enter Book Details:- " << endl;
    for (int i = 1; i <= 4; i++)
    {
        bookObject[i].getBookDetails();
    }
    cout << endl
         << setw(20) << "Book Name: " << setw(20) << "Author: " << setw(20) << "Price" << endl;
    for (int i = 1; i <= 4; i++)
    {
        bookObject[i].displayBookDetails();
    }

    return 0;
}