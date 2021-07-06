/** Solution to the Programming challenge -
    to Find the GCD of two given Numbers
    Using Recursion
*/
#include<iostream>
using namespace std;

int GCD(int m, int n)
{
    if(m == n)
        return n;
    else if(m > n)
        return GCD(m-n, n);
    else
        return GCD(m, n-m);
}
int main()
{
    int a, b;
    cout<<"\nEnter 2 numbers..";
    cin>>a>>b;

    cout<<"The GCD of "<<a<<" and "<<b<<" is "<<GCD(a,b)<<endl;
    return 0;
}
