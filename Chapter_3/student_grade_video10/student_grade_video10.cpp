// Programming chalenge and it's solution
// Finding the grade of a student
#include <iostream>
using namespace std;

int main()
{
    int grade1, grade2, grade3, gradeTotal, averageGrade;

    cout << "Enter the marks of 3 subjects from a student: ";
    cin >> grade1 >> grade2 >> grade3;

    gradeTotal = grade1 + grade2 + grade3;
    averageGrade = gradeTotal / 3;

    if(grade1 < 35 || grade2 < 35 || grade3 < 35)
    {
        cout << "The student fails and no grade is awarded"<<endl;
    }
    else if(averageGrade >= 75)
    {
        cout << "The students average points are "<<averageGrade<<", grade is A, the student distinctions himself from the others"<<endl;
    }
    else if(averageGrade < 75 && averageGrade >= 60)
    {
        cout << "The students average points are "<<averageGrade<<", grade is A"<<endl;
    }
    else if(averageGrade < 60 && averageGrade >= 50)
    {
        cout << "The students average points are "<<averageGrade<<", grade is B"<<endl;
    }
    else
    {
        cout << "The students average points are "<<averageGrade<<", grade is C"<<endl;
    }

    return 0;
}