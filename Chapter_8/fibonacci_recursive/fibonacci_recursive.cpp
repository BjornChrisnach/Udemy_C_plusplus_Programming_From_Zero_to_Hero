#include <iostream>
using namespace std;

int fib(int n);

int main()
{
    int inputNum = 0, i = 0, outputNum = 0;
    cout << "Enter the maximum number for a Fibonacci series :";
    cin >> inputNum;

    for(i = 1; i <= inputNum; i++)
    {
        if(i == 1)
        {
            cout << "The fibonacci result is: " << endl;
        }
        else
        {

        }
        outputNum = fib(i);
        cout << outputNum << endl;
        if(i == inputNum)
        {
            cout << "The calculated fibonacci for " << inputNum << " is " << fib(inputNum) << endl;
        }
    }

    return 0;
}


int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return (fib(n-1) + fib(n-2));

}