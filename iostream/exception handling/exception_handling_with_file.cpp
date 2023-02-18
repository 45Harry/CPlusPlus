#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char msg[] = "File not found";
    char data;
    fstream G;
    try
    {
        G.open("student.txt", ios::in);
        if (G.fail())
            throw msg;
        G >> data;
        while (G)
        {
            cout << data;
            G >> data;
        }
    }
    catch (char d[])
    {
        cout << d;
    }

    return 0;
}