// program to overload =+(ie assignment operator)
#include <iostream>
using namespace std;
class Money
{
private:
    int Rs, Paisa;

public:
    Money()
    {
        Rs = 0;
        Paisa = 0;
    }
    Money(int r, int p)
    {
        Rs = r;
        Paisa = p;
    }
    void display()
    {
        cout << "Rs: " << Rs << "Paisa: " << Paisa << endl;
    }
    void ReadData()
    {
        cout << "Rupees: ";
        cin >> Rs;
        cout << "Paisa: ";
        cin >> Paisa;
    }
    void operator+=(Money m)
    {
        Rs = Rs + m.Rs;
        Paisa = Paisa + m.Paisa;
        if (Paisa >= 100)
        {
            Paisa = Paisa - 100;
            Rs = Rs + 1;
        }
    }
};
int main()
{
    Money m1, m2;
    cout << "Enter First Amount of Money: " << endl;
    m1.ReadData();
    cout << "Enter Second Amount of MOney: " << endl;
    m2.ReadData();
    cout << "First MOney is:";
    m1.display();
    cout << "Second MOney is:";
    m2.display();
    m1 += m2; // same as m1.operator+=(m2)
    cout << "New valut of first money is: ";
    m1.display();

    return 0;
}