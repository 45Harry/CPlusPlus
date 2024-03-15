// program to illustrate "member function of one class can be made friend of another class."
#include <iostream>
using namespace std;
class ExtraActivities;
class Exam
{
    float acd_mark;

public:
    void getMarks()
    {
        cout << "Enter Your Marks: ";
        cin >> acd_mark;
    }
    float totalMarks(ExtraActivities); // function which will take object as an argument
};
class ExtraActivities
{
private:
    float exmarks;

public:
    void getExMarks()
    {
        cout << "Enter Your ExtraMarks: ";
        cin >> exmarks;
    }
    friend float Exam::totalMarks(ExtraActivities); // Member fun of "Exam class" becomes friend of "ExtrActivites" class
};
float Exam::totalMarks(ExtraActivities obj)
{
    float totalMarks = obj.exmarks + acd_mark;
    return totalMarks;
}

int main()
{
    ExtraActivities EA;
    Exam E;
    E.getMarks();
    EA.getExMarks();
    cout << "The Total marks is: " << E.totalMarks(EA);

    return 0;
}