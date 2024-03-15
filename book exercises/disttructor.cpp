// program to illustrater the use of distructor
#include <iostream>
using namespace std;
class Box
{
public:
    Box()
    {
        cout << "I Am constructor" << endl;
    }
    ~Box()
    {
        cout << "I'am Deconstructor";
    }
};

int main()
{
    Box obj;

    return 0;
}