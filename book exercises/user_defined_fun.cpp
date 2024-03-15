// this is the program that takes theree input frmo the user , and gives sum to the user's
#include <iostream>
using namespace std;
// function to take three input form user and it will pass it to caller functin
void readData(float &num1, float &num2, float &num3)
{
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter the third number: ";
    cin >> num3;
}
// function to add the three number
float sumData(float num1, float num2, float num3)
{
    return (num1 + num2 + num3);
}
// functin to display the sum of the three numbers
void displayData(float result)
{
    cout << "The sum of three number is: " << result << endl;
}

int main()
{
    float num1, num2, num3;
    float sum;

    readData(num1, num2, num3);
    sum = sumData(num1, num2, num3);

    displayData(sum);

    return 0;
}