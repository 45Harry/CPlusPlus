// program to increment num by n in a function
#include <iostream>
using namespace std;
int increse(int num, int n = 10)
{
    num = num + n;
    return num;
}

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    int numb = increse(num);
    cout << "The increased number is :" << numb;

    return 0;
}