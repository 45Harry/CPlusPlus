#include <iostream>
#include <string.h>

using namespace std;
class str
{
private:
    char h[40];

public:
    str()
    {
        strcpy(h, " ");
    }
    str(char hh[])
    {
        strcpy(h, hh);
    }
    void show()
    {
        cout << h;
    }
    friend str operator+(str g, str j);
};
str operator+(str g, str j)
{
    str temp;
    strcpy(temp.h, g.h);
    strcat(temp.h, j.h);
    return temp;
}
int main()
{
    str s("Harry ");
    str s2("Sah");
    str s3 = s + s2;
    s3.show();
    return 0;
}