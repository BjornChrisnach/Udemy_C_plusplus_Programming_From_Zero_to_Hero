// Programming challenge, find the GCD of two given numbers using iteration
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter any 2 numbers: ";
    cin>>m>>n;

    if(m < 0)
    {
        m = m * -1;
    }
    else if(n < 0)
    {
        n = n * -1;
    }
    else if(n == 0 || m == 0)
    {
        cout << "The number can't be zero!"<<endl;
        exit(0);
    }

    while(m != n)
    {
        if(m > n)
            m = m - n;
        else
            n = n - m;
    }
    cout << "The GCD is "<<n<<endl;

    return 0;
}