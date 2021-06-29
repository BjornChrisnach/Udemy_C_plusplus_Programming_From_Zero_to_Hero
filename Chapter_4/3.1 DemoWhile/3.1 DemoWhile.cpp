/// Practice Program - Using while Loop
#include<iostream>
using namespace std;

int main()
{
    int n, i, sum=0;

    cout<<"\nEnter a Number";
    cin>>n;

    i=1;
    while(i<=n)
    {
        sum = sum + i;
        i++;
    }

    cout<<"The sum of first "<<n<<" natural numbers is "<<sum<<endl;
    return 0;
}