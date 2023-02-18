#include <iostream>
using namespace std;
template <class i>
class calculate
{
private:
    i num1;
    i num2;

public:
    calculate(i x, i y)
    {
        num1 = x;
        num2 = y;
    }
    void sum()
    {
        cout << "The sum of two number is " << num1 + num2<<endl;
    }
};
int main()
{
    calculate <float> f(2.3,3.4);
    calculate <int> o(23,34);
    o.sum();
    f.sum();
    
    return 0;
}