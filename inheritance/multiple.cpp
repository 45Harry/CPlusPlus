#include <iostream>

using namespace std;
class batsman
{
protected:
    int rank;
    char name[40];

public:
    void getdata()
    {
        cout << "Enter the name of the player" << endl;
        cin >> name;
        cout << endl
             << "Enter the rank of the player" << endl;
        cin >> rank;
    }
};
class virat : public batsman
{
public:
    void show()
    {
        cout << "The name of the player is " << name;
        cout << "The rank of the player is " << rank;
    }
};
class rohit : public batsman
{
public:
    void show()
    {
        cout << "The name of the player is " << name<<endl;
        cout << "The rank of the player is " << rank;
    }
};
class yourchoice : public virat, public rohit
{

} ;
int main()
{
    yourchoice o;
    o.virat::getdata();
    o.virat::show();
    return 0;
}