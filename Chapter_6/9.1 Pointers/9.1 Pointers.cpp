/// Programming Challenge -
/// Compute the Sum and Absolute difference of 2 integers ,
/// Using Pointers as parameters to a functions

#include<iostream>
using namespace std;

void update(int *a,int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = abs(temp - *b);

}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    cout<<"Enter any two Numbers..";
    cin>>a>>b;

    update(pa, pb);
    cout<<"a = "<<a<<" and b = "<< b;
    return 0;
}
