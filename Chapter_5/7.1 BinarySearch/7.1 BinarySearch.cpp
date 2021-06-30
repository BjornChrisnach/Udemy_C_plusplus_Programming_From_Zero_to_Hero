/// Solution to Programming Challenge - Binary Search using Iteration

#include<iostream>
using namespace std;

int main()
{
    int *A, low, high, mid,key, n;
    cout<<"\nHow many Elements ? ";
    cin>>n;

    A = new int[n];

    cout<<"\nEnter the Elements...";
    for(int i=0;i<n;i++)
        cin>>A[i];

    cout<<"\nEnter the Key Element..";
    cin>>key;

    low = 0;
    high = n-1;
    while(low <= high)
    {
        mid = (low + high)/2;
        if(key==A[mid])
        {
            cout<<"\nElement found ";
            exit(0);
        }
        else if(key < A[mid])
        {
            high = mid -1;
        }
        else  {
            low = mid + 1;
        }
    }
    cout<<"\nElement Not Found";


    return 0;
}
