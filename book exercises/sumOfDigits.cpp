// to find the sum of digits
#include <iostream>
using namespace std;
// return sum of digits
int sumFun(int n)
{
    if (n > 0)
    {
        return n += sumFun(n - 1);
    }
    else
        return 0;
}

int main()
{
    int num;
    // prompt the user to enter non-negativer or positive integer
    do
    {
        cout << "Enter the digit :";
        cin >> num;
    } while (num < 0);
    // display the the sum of digits by calling sumFun
    cout << "The sum of digits si " << sumFun(num);

    return 0;
}