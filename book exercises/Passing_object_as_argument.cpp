// to illustrate the use of object as parameter
#include <iostream>
using namespace std;
class Coordinates
{
private:
    int X;
    int Y;

public:
    void getCoordinates();
    void addCoordinates(Coordinates, Coordinates);
    void displayCoordinates();
};
void Coordinates::getCoordinates() // ask user to enter coordinates
{
    cout << "Enter X:";
    cin >> X;
    cout << "Enter Y:";
    cin >> Y;
}
void Coordinates::addCoordinates(Coordinates one, Coordinates two) // member function that takes two object
{

    X = one.X + two.X;
    Y = one.Y + two.Y;
}
void Coordinates::displayCoordinates() // output final coordinates
{
    cout << "The sum of the coordinates is: " << X << " " << Y;
}
int main()
{
    Coordinates First, Second, Sum;

    cout << "Enter the first Coordinate :" << endl;
    First.getCoordinates(); // gets the first coordinate
    cout << "Enter the Second Coordinate :" << endl;
    Second.getCoordinates();           // gets the second coordinate
    Sum.addCoordinates(First, Second); // passing object to the funcion
    Sum.displayCoordinates();          // display final coordinate
    return 0;
}