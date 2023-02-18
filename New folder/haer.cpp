#include<iostream>
#include<string.h>
using namespace std;
class str
{
private:
    char s[30];
public:
    str()
    {
        strcpy(s," ");
    }
    str (char ss[])
    {
        strcpy (s,ss);
    }
    void show()
    {
        cout<<s<<endl;
    }
friend str operator +(str s1,str s2);
};
str operator +(str s1,str s2)
{
    str temp;
    strcpy(temp.s,s1.s);
    strcat(temp.s,s2.s);
    return temp;
}
int main ()
{
    str p1("Harry ");
    str p2("Sah");
    str p3;
    p3=p1+p2;
    p3.show();
    return 0;
}