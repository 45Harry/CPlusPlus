// program that will take input as centigrade and display fhreanhite
#include <iostream>
using namespace std;
void tempConversion(float &tempInC) // passing value by refernce , meaning it will change the original value
{
    tempInC = (tempInC * 9 / 5) + 32; // formula to convet centigrade ing fahrenheit
}
int main()
{
    float tempInCel;
    cout << "Enter the temperatur value in centigrade :";
    cin >> tempInCel;
    tempConversion(tempInCel);
    cout << "The value after convering centigrade into fahrenhit is " << tempInCel;

    return 0;
}