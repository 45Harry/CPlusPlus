// program to show the use of destructor to destroy varaibles
#include <iostream>
using namespace std;
class Box
{
    int *p;

public:
    Box() // constructor
    {
        p = new int(3); // allocate a new integer array,place its address in p
    }
    void readData()
    {
        cout << "\nEnter length,breadth and height: ";
        for (int i = 1; i <= 3; i++)
        {
            cin >> p[i];
        }
    }
    float getVolume()
    {
        float vol = 1;
        for (int i = 1; i <= 3; i++)
        {
            vol *= p[i];
        }
        return vol;
    }
    ~Box() // destructor
    {
        delete[] p; // de-allocate the integer array
        cout << endl
             << "Array Deleted";
    }
};

int main()
{
    Box b;
    b.readData();
    cout << "Volume is: " << b.getVolume();

    return 0;
}