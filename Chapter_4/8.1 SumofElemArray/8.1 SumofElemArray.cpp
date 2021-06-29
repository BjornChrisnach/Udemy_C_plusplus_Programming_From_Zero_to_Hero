/** Solution to Programming Challenge -
    to sum the elements of Array
*/
#include<iostream>
using namespace std;

int main()
{
    int A[10], sum = 0, i;

    cout<<"\nEnter the Elements..";
    for(i=0;i<10;i++)
        cin>>A[i];

    for(i=0;i<10;i++)
        sum += A[i];
    cout<<"The Sum is.."<<sum<<endl;

    return(0);
}
