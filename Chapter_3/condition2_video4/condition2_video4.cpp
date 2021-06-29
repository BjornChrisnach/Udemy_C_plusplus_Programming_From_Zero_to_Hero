// Practice program - using conditional statements
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter the age of a person: ";
    cin>>age;

    if(age < 18)
    {
        cout << "Oh you are a minor, not eligible for vote"<<endl;
    }
    else
    {
        cout << "Congratulations !!! , You are eligible for voting"<<endl;
    }
    
    return 0;
}