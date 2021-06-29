// Programming chalenge
// to Maximum and Minimum element of an array
#include <iostream>
using namespace std;

int main()
{
    int A[10], maximum, minimum, i;
    
    cout << "Enter the elements ... ";
    for(i = 0; i < 10; i++)
    {
        cin>>A[i];
    }
    maximum = A[0];
    minimum = A[0];

    for(i=1; i < 10; i++)
    {
        if(A[i] > maximum)
        {
            maximum = A[i];
        }
        else if(A[i] < minimum)
        {
           minimum = A[i]; 
        }
    }
    cout << "Maximum of all elements is.. "<<maximum<<endl;
    cout << "Minimum of all elements is.. "<<minimum<<endl;

    return 0;
}