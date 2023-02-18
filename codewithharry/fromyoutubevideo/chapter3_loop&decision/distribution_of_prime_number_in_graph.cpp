#include <iostream>

using namespace std;
#include <conio.h> //for getche
int main()
{
    const unsigned char WHITE = 219; // SOLID COLOR (PRIMES)
    const unsigned char GRAY = 176;  // GRAY NON PRIMES
    unsigned char ch;                // for each screen position
    for (int count = 0; count < 80 * 25 - 1; count++)
    {
        ch = WHITE;                     // assume it's prime
        for (int j = 2; j < count; j++) // divide by enery integer from 2 on u0;if remainder is 0,
            if (count % j == 0)
            {
                ch = GRAY; // it's not prime
                break;     // break out of loop
            }
        cout << ch; // display the character
    }
    getche(); // freeze screen until keypress
    return 0;
}