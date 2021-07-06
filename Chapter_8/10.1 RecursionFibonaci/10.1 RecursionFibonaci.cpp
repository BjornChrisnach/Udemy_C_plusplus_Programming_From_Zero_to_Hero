/** Solution to Programming Challenge -
    to Find the nth Term in a Fibonacci series
*/
#include<iostream>
using namespace std;

int fib(int);

int main()
{
    int n;
    cout<<"\nEnter the Term....";
    cin>>n;
    if(n>0)
       cout<<"The Fibonacci is  "<<fib(n)<<endl;

    return(0);
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
