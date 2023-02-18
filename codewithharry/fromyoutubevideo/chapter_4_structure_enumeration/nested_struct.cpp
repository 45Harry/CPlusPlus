#include <iostream>

using namespace std;
struct Distance
{ // english distance
    int feet;
    float inches;
};
struct Room
{                     // rectanle araa
    Distance length;  // length of room
    Distance breadth; // breadth of room
};
int main()
{
    Room dinings;             // define a Room
    dinings.length.feet = 13; // assingn value to the room
    dinings.length.inches = 6.5;
    dinings.breadth.feet = 10;
    dinings.breadth.inches = 0.0;
    //**CONVERt length & breadth
    float l = dinings.length.feet + dinings.length.inches / 12;
    float b = dinings.breadth.feet + dinings.breadth.inches / 12;
    //**find area and display it in
    cout << "Dining room area is " << l * b << " square feet\n";
    return 0;
}