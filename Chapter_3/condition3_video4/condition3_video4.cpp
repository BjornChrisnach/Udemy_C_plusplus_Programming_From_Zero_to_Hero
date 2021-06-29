// Practice program - using conditional statements
#include <iostream>
using namespace std;

int main()
{
    int hour;

    cout << "Enter the hour: ";
    cin>>hour;

    if((hour >= 9 ) && (hour <= 17))
    {
        cout << hour << " is a working hour."<<endl;
    }
    else
    {
        cout << hour << " is not a working hour."<<endl;
    }
    
    return 0;
}