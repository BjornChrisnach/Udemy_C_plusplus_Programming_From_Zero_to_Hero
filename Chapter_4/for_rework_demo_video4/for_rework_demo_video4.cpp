// Demonstrates the workings of the while loop, but reworked into a for loop
// Program to find the Factorial of a given number
#include <iostream>
using namespace std;

int main()
{
    int number, i, factorial;
    cout << "Enter a number to find the factorial: ";
    cin >> number;

    for(i = 1, factorial = 1; i <= number; i++)
    {
        factorial *= i;
    }
/*
    i = 1;
    while(i <= number)
    {
        factorial *= i;
        i++;
    }
*/
    cout << "The factorial of "<<number<<" is .... "<<factorial<<endl;

    return 0;
}