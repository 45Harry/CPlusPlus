#include <iostream>

using namespace std;

int main()
{
    int time, principal, amount;
    float rate;
    cout << "\nEnter the principal : Rs.";
    cin >> principal;
    cout << "\nEnter the time(in years) : ";
    cin >> time;
    cout << "\nEnter the rate : ";
    cin >> rate;
    for (int i = 0; i < time; i++)
    {
        amount = principal * ((1 - (rate / 100))* time);
    }
    cout<<"The sum of monery is " << amount;
    return 0;
}