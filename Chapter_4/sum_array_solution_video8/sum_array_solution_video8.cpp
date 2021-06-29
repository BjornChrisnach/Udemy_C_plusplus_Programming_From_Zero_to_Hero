/* Solution to programming chalenge -
   to sum the elements of array
*/
#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0, A[10];

    cout << "Enter the elements.. ";
    for(i = 0; i < 10; i++)
    {
        cin >> A[i];
    }

    for(i = 0; i < 10; i++)
    {
        sum += A[i];
    }
    cout << "The sum is.. "<<sum<<endl;

    return 0;
}