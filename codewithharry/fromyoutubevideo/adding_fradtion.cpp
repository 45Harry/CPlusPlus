#include <iostream>

using namespace std;
class fraction
{
private:
    int N, D;

public:
    fraction()
    {
        N = 0;
        D = 0;
    }
    fraction(int n, int d)
    {
        N = n;
        D = d;
    }
    void showfunc()
    {
        cout << "The sum of two function is " << N << "/" << D << endl;
    }
    friend fraction operator+(fraction, fraction);
};
fraction operator+(fraction ff, fraction sf)
{
    fraction
        temp;
    temp.N = ((ff.N) * (sf.D)) + ((ff.D) * (sf.N));
    temp.D = ((ff.D) * (sf.D));
    return temp;
};

int main()
{
    fraction ff(1, 4);
    fraction sf(2, 3);
    fraction temp = ff + sf;
    temp.showfunc();
    return 0;
}