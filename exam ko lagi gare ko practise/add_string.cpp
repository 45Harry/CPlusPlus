#include <iostream>
#include <string.h>

using namespace std;
class add
{
private:
    char name[50];

public:
    add()
    {
        strcpy(name, " ");
    }
    add(char nname[])
    {
        strcpy(name, nname);
    }
    void show()
    {
        cout << name;
    }
    friend add operator+(add firstname, add lastname);
};
add operator+(add firstname, add lastname)
{
    add temp;
    strcpy(temp.name, firstname.name);
    strcat(temp.name, lastname.name);
    return temp;
};

int main()
{
    add firstn("harry");
    add lastn("sah");
    add full_name = firstn +lastn;
    full_name.show();
    return 0;
}