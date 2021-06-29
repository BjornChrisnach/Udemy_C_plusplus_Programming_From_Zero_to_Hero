// Practice program - using conditional statements
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter a number: ";
    cin>>n;

    if(n % 2 == 0)
    {
        cout << "Number "<<n<<" is an even number."<<endl;
    }
    else
    {
        cout << "Number "<<n<<" is an odd number."<<endl;
    }
    
    return 0;
}