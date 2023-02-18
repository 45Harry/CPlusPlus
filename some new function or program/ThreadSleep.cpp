//this program has worked , as i have expected so , this;////is not 100% accurate

#include <iostream>
#include <windows.h>
#include <thread>
#include <chrono>

using namespace std;

int main()
{

    cout << "Hello I'm Harry" << endl;
    this_thread::sleep_for(chrono::seconds(20000));
    cout << "he replied after 20 seconds" << endl;
    cout << "Hi I'm Peter" << endl;
    return 0;
}