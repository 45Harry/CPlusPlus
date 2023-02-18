#include <iostream>
#include <process.h>
using namespace std;
#include <conio.h>
int main()
{
    char dir = 'a';
    int x = 10, y = 10;
    //  cout << "\nType Enter to quit\n";
    //  while (dir != '\r')
    //  {
    //      cout << "\nYOur location is " << x << "," << y;
    //      cout << "\nPress direction key (n,s,e,w):";
    //      dir = getche(); // get a char
    //      if (dir == 'n') // go north
    //          y--;
    //     else if (dir == 's') // go south
    //          y++;
    //       else if (dir == 'e') // go east
    //          x++;
    //      else if (dir == 'w') // go west
    //         x--;

    //  } // end while

    //****using switch statement *****
    cout << "\nEnter to quit\n";
    while (dir != '\r')
    {
        cout << "\nYOur location is " << x << "," << y;
        cout << "\nPress direction key (n,s,e,w): ";
        dir = getche(); // get a char
        switch (dir)
        {
        case 'n': // goes north
            y--;
            break;
        case 's': // goes south
            y++;
            break;
        case 'e': // goes east
            x++;
            break;
        case 'w': // goes west
            x--;
            break;
        // case '\r':
        //     cout << "Exiting...\n"; // enter key
        //    break;
        default:
            cout << "\nTry again\n"; // unknown char
        }                            // end switch
        if (!(x % 7) && !(y % 7))
        {
            cout << "\nThere's is a mushroom here.. :)\n";
        }
        if (x < 5 || x > 15)
        {
            cout << "\nBeware! DRAGON IS NEAR YOU \n"
                 << endl; // warn you of dragon
        }
        if (x == 7 && y == 11)
        {
            cout << "\nYou found the treasure! HURRY :)\n"
                 << endl; // success! you found the treasure
            cout << "Yay! you won the game " << endl;
            exit(0);
        }

    } // end while
    return 0;
}