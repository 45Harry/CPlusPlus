// program to oveload input>> and output << operator using frined function
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    friend void operator>>(istream &, Distance &);
    friend void operator<<(ostream &, Distance);
};
void operator>>(istream &in, Distance &dis)
{
    cout << endl
         << "Enter data Members of the objects: " << endl
         << endl;
    cout << endl
         << "Feet=";
    in >> dis.feet;
    cout << "inch=";
    in >> dis.inch;
}
void operator<<(ostream &out, Distance dis)
{
    cout << endl
         << "The data members of the object: ";
    out << dis.feet << "\'";
    out << dis.inch << "\"";
}
int main()
{
    Distance d;
    cin >> d;  // same as operator>>(cin,d)
    cout << d; // same as oprator<<(cout,d)

    return 0;
}