/// Programming Challenge - Validate a Number and Divide iff it is positive
///                         Else Give a message and terminate the program
#include<iostream>
using namespace std;

int main()
{
    int Result, m, n;

    cout<<"\nEnter 2 numbers....";
    cin>>m>>n;

    if(n<0 || n==0)
    {
        cout<<"\nThe Entered number is not positive number..";
        exit(0);
    }
    else
    {
        Result = m / n;
        cout<<"\n The Result is..."<<Result<<endl;
    }
    return 0;
}