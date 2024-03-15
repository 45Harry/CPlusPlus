// This program illustrate the returning of object form funcion
#include <iostream>
using namespace std;
class Coordinates
{
private:
    int X, Y;

public:
    void getCoordinates();
    Coordinates addCoordinates(Coordinates Result); // gets and return a class object
    void displayCoordinate();
};
void Coordinates::getCoordinates()
{
    cout << "Enter X: ";
    cin >> X;
    cout << "Enter Y: ";
    cin >> Y;
}
Coordinates Coordinates::addCoordinates(Coordinates Result) // this function here receives a class object and returns a class object
{
    Coordinates sum;
    sum.X = X + Result.X;
    sum.Y = Y + Result.Y;
    return sum;
}
void Coordinates::displayCoordinate()
{
    cout << "The final coordinates are: " << X << " " << Y;
}
int main()
{
    Coordinates first, second, Result;
    cout << "Enter first coordinates: " << endl;
    first.getCoordinates();

    cout << "Enter second coordinates: " << endl;
    second.getCoordinates();

    Result = first.addCoordinates(second); // passing second object into first and storing it into result
    Result.displayCoordinate();

    return 0;
}