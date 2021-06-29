// Practice program - using for loop
#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 1; i <= n ; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of the first "<<n<<" natural numbers is "<<sum<<endl;

    return 0;
}