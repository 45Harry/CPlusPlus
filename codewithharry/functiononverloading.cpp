#include <iostream>

using namespace std;
int add(int a, int b)
{
    return a + b;
}
float add(float x, float y, float z)
{
     return x + y + z;
}
int main()
{

    cout << "The sum of the two numver is" << add(5, 6) << endl;
    cout << "The sum of the two numver is" << add(5, 6, 5.4) << endl;

    return 0;
}