// Demonstrates the workings of the while loop
// Program to find the Factorial of a given number
#include <iostream>
using namespace std;

int main()
{
    int number, i, factorial;
    cout << "Enter a number to find the factorial: ";
    cin >> number;

    factorial = 1;
    i = 1;

    while(i <= number)
    {
        factorial *= i;
        i++;
    }
    cout << "The factorial of "<<number<<" is .... "<<factorial<<endl;

    return 0;
}