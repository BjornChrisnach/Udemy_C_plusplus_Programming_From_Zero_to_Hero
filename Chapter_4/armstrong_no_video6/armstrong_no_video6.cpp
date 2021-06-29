// Program challenge
// Find whether a given number is Armstrong number or not
#include <iostream>
using namespace std;

int main()
{
    int a, b, r, d = 0, i;

    cout << "Enter a number to check for Armstrong number: ";
    cin >> a;

    for(b = a; b > 0; b = b / 10)
    {
        r = b % 10;
        d = d + (r * r * r);
    }

    if(d == a)
    {
        cout <<a<<" is an Armstrong number"<<endl;
    }
    else
    {
        cout <<a<<" is not an Armstrong number"<<endl;
    }

    return 0;
}