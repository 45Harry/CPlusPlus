#include <iostream>
using namespace std;
template <class t>
class vector
{

public:
    t *arr;
    t size;
    vector(t m)
    {
        size = m;
        arr = new int[size];
    }
    t dotproduct(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main()
{
    // vector v1(3);
    // v1.arr[0] = 5;
    // v1.arr[1] = 4;
    // v1.arr[2] = 2;
    // vector v2(3);
    // v2.arr[0] = 5;
    // v2.arr[1] = 1;
    // v2.arr[2] = 0 ;
    // int a = v1.dotproduct(v2);
    // cout << a << endl;
    vector<int> v1(3);
    v1.arr[0] = 5;
    v1.arr[1] = 4;
    v1.arr[2] = 2;
    vector<int> v2(3);
    v2.arr[0] = 5;
    v2.arr[1] = 1;
    v2.arr[2] = 0;
    int a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}