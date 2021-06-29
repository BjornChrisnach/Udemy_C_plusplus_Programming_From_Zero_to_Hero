/// Practice Program - Finding Maximum of 2 given numbers
#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter any 2 Integers....";
    cin>>x>>y;

    if(x > y)
            cout<<x<<" is Maximum"<<endl;
    else
            cout<<y<<" is Maximum"<<endl;
    return 0;
}