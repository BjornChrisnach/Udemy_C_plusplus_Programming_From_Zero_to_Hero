// Practice program -
// to print the elements of array in reverse order
#include <iostream>
using namespace std;
#define MAX 1000

int main()
{

    int n, a[MAX];
    cin >> n;

    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    for(int i = n - 1 ; i > -1 ; i--)
    //for(int i = 0 ; i < n ; i++)
    {
        cout <<a[i]<<" ";
    }
       
    return 0;
}
