#include <iostream>
using namespace std;

int main()
{
    int n = 45;
    cout.fill('#');
    cout << "output in right justified.." << endl;
    cout.setf(ios::right, ios::adjustfield);
    cout.width(63);
    cout << "Harry Sah" << endl;
    cout.unsetf(ios::right);
    cout << "Harry Sah" << endl;
    cout << "Output in left justified.." << endl;
    cout.setf(ios::left, ios::adjustfield);
    cout.width(56);
    cout << "its only me" << endl;
    cout << "Output in internal justified.." << endl;
    cout.setf(ios::internal, ios::adjustfield);
    cout.width(53);
    cout << "its only me" << endl;
    cout << "thhe number is octal is :";
    cout.setf(ios::oct, ios::basefield);
    cout << n;

    return 0;
}