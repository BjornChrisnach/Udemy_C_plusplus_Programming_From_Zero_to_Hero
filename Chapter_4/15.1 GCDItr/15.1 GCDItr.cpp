/** Solution to the Programming challenge -
    to Find the GCD of two given Numbers
    Using iteration
*/
#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cout<<"\nEnter any 2 numbers..";
    cin>>m>>n;

    m = (m > 0) ? m : -m;
    n = (n > 0) ? n : -n;
    while(m != n)
    {

        if(m > n)
            m = m - n;
        else
            n = n - m;
    }
    cout<<"\nThe GCD is "<<n<<endl;
    return 0;
}
