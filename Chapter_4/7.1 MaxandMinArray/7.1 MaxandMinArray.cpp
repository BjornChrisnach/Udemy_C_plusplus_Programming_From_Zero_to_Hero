/** Programming Challenge -
    to Maximum and Minimum Element of an Array
*/
#include<iostream>
using namespace std;

int main()
{
    int A[10], maximum, minimum, i;

    cout<<"\nEnter the Elements ...";
    for(i=0;i<10;i++)
        cin>>A[i];

    maximum = A[0];
    minimum = A[0];

    for(i=1; i<10; i++)
    {
        if(A[i] > maximum)
            maximum = A[i];
        else if(A[i] < minimum)
            minimum = A[i];
    }
    cout<<"Maximum of All Elements is.."<<maximum<<endl;
    cout<<"Minimum of All Elements is.."<<minimum<<endl;

    return(0);
}