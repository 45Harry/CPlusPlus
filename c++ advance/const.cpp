#include <iostream>

using namespace std;

int main()
{
    int i = 4;
    // i = 7;
    const_cast<int &>(i) = 8;
    //  int j;
    // static_cast<const int &>(j) = 5;
    // const int *p1 = &i; // data is const,pointer is not
    //  p1++;

    // int *const p2; // pointer is const, data is not

    // const int *const p3; // data and pointer are const
    cout << i<<endl;
    i++;
    cout << i;

    //   int const *p4 = &i;
    ///  const int *p4 = &i;

    // if const is on the left of *,data is const
    // if const is on the right of *, pointer is const
    return 0;
} //