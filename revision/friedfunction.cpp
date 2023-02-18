#include <iostream>

using namespace std;
class demo
{
private:
    float feet;
    float inch;

public:
demo (){
    feet=0;
    inch=0;
}
    demo(float x, float y)
    {
        feet = x;
        inch = y;
    }
    void showdata()
    {
        cout << " The sum of distance is " << feet << "' " << inch << "\"" << endl;
    }
    friend demo add(demo hari, demo avi);
};
demo add(demo hari, demo avi)
{

    demo t;
    t.feet = hari.feet + avi.feet;
    t.inch = hari.inch + avi.inch;
    if (t.inch > 12)
    {
        t.feet = t.feet + 1;
        t.inch = t.inch - 12;
            return t;

    }
}
int main()
{

    demo d3;

    demo d1(2, 4);

    demo d2(6, 10);
    d3 = add(d1,d2);
    d3.showdata();
}