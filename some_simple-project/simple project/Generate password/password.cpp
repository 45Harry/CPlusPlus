#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    char Password[10], Username[10] = "Harry", US[10], ch;
    int i = 0;
    bool iscorrect = 0; // check if it id true or false
    while ((iscorrect == false) && (i < 3))
    {
        cout << "Enter Username: ";
        cin >> US;
        if (strcmp(Username, US) == 0)// compars the username stored in the memory with the input username
        { 
            cout << "Enter Password: "; iscorrect = true;
           
            for (i = 0; i <= 7; i++)
            {
                ch = getch(); // allows you press any button without displaying it on the console window
                Password[i] = ch;
                ch = '*';
                cout << ch;
            }
            if (ch != 13) // 13 is the ASCII NUMBER FOR ENTER
            {
                cout <<"";
            }
            else if (ch != 8) // 8 is the ASCII NUMBER FOR Backspace
            {
                cout << '*';
            }
            cout << "Login successful!" << endl;
            cout << "Your passoword is : " << endl;
            for (i = 0; i <= 7; i++)
            {
                cout << Password[i];
            }
            getch();
        }
        else
        {
            cout << "Wrong password or username " << endl;
        }
        i++;
    }

    return 0;
}