/** Solution to Programming Challenge -
                            Reverse a Given Number Eg: for input 1234,
                                output should be 4321
*/
#include<iostream>
using namespace std;

int main()
{
    int n, rev=0, rem;

    cout<<"\nEnter a number";
    cin>>n;
    while(n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n /10;
    }
    cout<<"\nThe reversed number is "<<rev<<endl;

    return 0;
}