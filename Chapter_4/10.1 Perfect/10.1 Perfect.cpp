/// Programming Challenge - Find whether a Number is Perfect Number or NOT

#include<iostream>
using namespace std;

int main()
{

    int n, sum = 0;

    cout<<"Enter a number..";
    cin>>n;

    for(int i=1;i<=n/2;++i)
    {
        if(n % i==0)
            sum = sum + i;
    }

    if(sum == n)
        cout<<"\nThe number "<<n<<" is a Perfect Number";
    else
        cout<<"\nThe number "<<n<<" is NOT a Perfect Number";
    return 0;
}