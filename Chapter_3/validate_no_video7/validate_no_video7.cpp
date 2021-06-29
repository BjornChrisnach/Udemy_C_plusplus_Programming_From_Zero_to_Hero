// Programming Challenge - Validating number for negative or positive
// Validate a number and divide, if it is a positive
// Else give a message and terminate the program
#include<iostream>
using namespace std;

int main()
{
    int n, m, result;

    cout << "Enter 2 number: ";
    cin >> m >> n;

    if(n < 0 || n == 0)
    {
        cout << "The number that you have given is either a negative number or zero."<<endl;
        exit(0);
    }
    else
    {
        result = m/n;
        cout << "The result is "<<result<<endl;  
    }

    return 0;
}
