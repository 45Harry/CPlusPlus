// program will illustrae the use of static function
#include <iostream>
using namespace std;
class Box
{
private:
    static int count; // static int variable
    int nam;

public:
    static int getCount() // static function
    {
        return count;
    }
    static int incrementCount() // static function, this function will only take staitc member(fun || variables)
    {
        count++;
    }
};
int Box::count; // Defination fo static data member
int main()
{
    cout << "Initially value of count :" << Box::getCount() << endl;
    Box o1, o2, o3;
    o1.incrementCount();
    o2.incrementCount();
    o3.incrementCount();
    cout << " Finally Value of count :" << Box::getCount() << endl;

    return 0;
}