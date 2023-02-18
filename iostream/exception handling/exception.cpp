#include <iostream>
using namespace std;
class printer
{
    string name;
    int avapaper;

public:
    printer(string namee, int paper)
    {
        name = namee;
        avapaper = paper;
    }
    void print(string txtDoc)
    {
        int requiredpaper = txtDoc.length() / 10;
        if (requiredpaper > avapaper)
            throw "No Paper! Please add some to print more ";
        cout << "Printing...." << txtDoc << endl;
        avapaper -= requiredpaper;
    }
};
int main()
{
    printer myprinter("hpprinter", 10);
    try
    {
        myprinter.print("Hello,my name is Harry.I am Computer Engineeer");
        myprinter.print("Hello,my name is Harry.I am Computer Engineeer");
        myprinter.print("Hello,my name is Harry.I am Computer Engineeer");
    }

    catch (const char *msg)
    {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}