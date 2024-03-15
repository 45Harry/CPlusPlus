// program to add private data members of two diffennt class
#include <iostream>
using namespace std;
class ExtraActivities;
class Exam
{
private:
    int examMarks;

public:
    void getMarks()
    {
        cout << "Enter The ExamMark: ";
        cin >> examMarks;
    }
    friend void totalMarks(Exam, ExtraActivities); // function becomes friied of two class
};
class ExtraActivities
{
private:
    int extraMarks;

public:
    void getExtraMarks()
    {
        cout << "Enter The ExtraMark: ";
        cin >> extraMarks;
    }
    friend void totalMarks(Exam, ExtraActivities); // common fun being frined of two class
};
void totalMarks(Exam E, ExtraActivities EA) // independent function which will have accces to private data member of exam && ExtraActivities class
{
    int Final = E.examMarks + EA.extraMarks;
    cout << "Final marks is: " << Final;
}
int main()
{
    Exam exam;
    ExtraActivities extraactivities;
    exam.getMarks();
    extraactivities.getExtraMarks();
    totalMarks(exam, extraactivities);

    return 0;
}