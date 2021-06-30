/** Solution to Programming Challenge -
        Find whether Number is a PALINDROME or NOT
        Eg: 121 is a PALINDROME and 123 is NOT PALINDROME
*/
#include<iostream>
using namespace std;

int main()
{
    int n, rem, rev=0, temp;

    cout<<"\nEnter a number..";
    cin>>n;

    temp = n;
    while(n>0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if(n == rev)
        cout<<"\nThe number "<<n<<" is a Palindrome "<<endl;
    else
        cout<<"\nThe number "<<n<<" is Not a Palindrome "<<endl;
    return 0;
}
