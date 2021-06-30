/// Solution to Programming Challenge - Linear Search
#include<iostream>
using namespace std;

int main()
{
    int *A, key, i, found=0, n;

    cout<<"\nHow many Elements ?";
    cin>>n;

    A = new int[n];
    cout<<"\nEnter the Elements ..";
    for(i=0;i<n;i++)
        cin>>A[i];

    cout<<"\nEnter the Key Element to Search";
    cin>>key;

    for(i=0;i<n;i++)
    {

        if(key == A[i])
        {
            found = 1;
            break;
        }
    }
    if(found==0)
        cout<<"\nElement "<<key<<" Not Found"<<endl;
    else
        cout<<"\nElement "<<key<<" Found"<<endl;
    return 0;
}
