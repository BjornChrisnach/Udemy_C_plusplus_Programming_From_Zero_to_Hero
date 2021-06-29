// Programming challenge - Find whether a number is perfect number or not
#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    cout << "Enter a number, to find the factors: ";
    cin >> n;

    for(i = 1; i <= (n / 2); i++)
    {
        if(n % i == 0)
        {
            sum += i;
            cout <<i<<" ";
        }
    }
    if(sum == n)
    {
        cout <<"\nGiven number "<<n<<" = sum value of "<<sum<<", "<<n<<" is a perfect number"<<endl;
    }
    else
    {
        cout <<"\nGiven number "<<n<<" = sum value of "<<sum<<", "<<n<<" is not a perfect number"<<endl;
    }
    
    return 0;
}