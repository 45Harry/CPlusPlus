// program to overload binary plus operator for concatenation of two strings
#include <iostream>
#include <string.h>
using namespace std;
class Stringss
{
private:
    char st[30];

public:
    Stringss()
    {
        strcpy(st, " ");
    }
    Stringss(char data[])
    {
        strcpy(st, data);
    }
    void display()
    {
        cout << st;
    }
    Stringss operator+(Stringss str)
    {
        Stringss temp;
        strcpy(temp.st, st);
        strcat(temp.st, str.st);
        return temp;
    }
};
int main()
{
    Stringss S1("Welcome");
    Stringss S2(" To My College");
    Stringss S3;
    S3 = S1 + S2;
    cout << "\nS1=";
    S1.display();
    cout << "\nS2=";
    S2.display();
    cout << "\nS3=";
    S3.display();

    return 0;
}