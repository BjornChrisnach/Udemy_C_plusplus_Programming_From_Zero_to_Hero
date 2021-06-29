/// Practice Program - Using for Loop
#include<iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout<<"Enter a Number: ";
    cin>>n;


    for(i = 0; i <= n ; i++)
    {
        sum = sum + i;
    }

    cout<<"The sum of first "<<n<<" natural numbers is "<<sum<<endl;

    return 0;
}