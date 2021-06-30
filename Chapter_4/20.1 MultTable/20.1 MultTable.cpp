/// Programming Challenge Solution - Printing Multiplication Table
#include<iostream>
using namespace std;

int main()
{
    for(int k=2;k<=5;k++)
    {
        for(int i=k, j=1;j<=10;j++)
        {
            cout<<i<<" X "<<j<<" = "<< i*j;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
