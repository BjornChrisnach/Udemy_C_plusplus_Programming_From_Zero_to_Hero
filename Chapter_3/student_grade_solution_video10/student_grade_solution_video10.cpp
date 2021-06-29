// Programming chalenge and it's solution
// Finding the grade of a student
#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, total, Avg;

    cout << "Enter the marks of 3 subjects: ";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    Avg = total / 3;

    if(m1 < 35 || m2 < 35 || m3 < 35)
    {
        cout << "The student fails.."<<endl;
    }
    else if(Avg >= 75)
    {
        cout << "Ohh Distinction !! "<<endl;
    }
    else if(Avg < 75 && Avg >= 60)
    {
        cout << "Grade A"<<endl;
    }
    else if(Avg < 60 && Avg >= 50)
    {
        cout << "Grade B"<<endl;
    }
    else
    {
        cout << "Grade C"<<endl;
    }

    return 0;
}