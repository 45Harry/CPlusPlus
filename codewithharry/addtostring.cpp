#include <iostream>
#include <string.h>
using namespace std;
class stringg
{
private:
    char name[40];

public:
    stringg()
    {
        strcpy(name, "");
    }
    stringg(char nam[])
    {
        strcpy(name, nam);
    }
    void show()
    {
        cout << "The full name is " << name;
    }
    friend stringg operator+(stringg f, stringg l);
};
stringg operator+(stringg f, stringg l)
{
    stringg temp;
    strcpy(temp.name, f.name);
    strcat(temp.name, l.name);
    return temp;
}
int main()
{
    stringg ff("Harry");
    stringg ll("shah");
    stringg fl;
    fl = ff+ll;
    fl.show();
    return 0;
}