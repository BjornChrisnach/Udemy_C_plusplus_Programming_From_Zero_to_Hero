/// Programming Challenge - Find the Roots and
///                         Nature of Roots in a Quadratic Equation
///                   1. if determinant = 0, ROOTS ARE REAL AND EQUAL
///                   2. if determinant < 0, ROOTS ARE IMAGINARY
///                   3. if determinant > 0, ROOTS ARE REAL AND UNEQUAL
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b, c, det;
    float Root1, Root2;

    cout<<"\nEnter the values of a, b and c";
    cin>>a>>b>>c;

    det = (b*b) - (4*a*c);

    if(det<0)
    {
        cout<<"\nRoots are Imaginary..."<<endl;
        exit(0);
    }
    else if(det==0)
    {
        cout<<"\nRoots are Real and equal..."<<endl;
        Root1 = Root2 = -b / (2*a);
    }
    else
    {
        cout<<"\nRoots are Real and Unequal..."<<endl;
        Root1 = ((-b) + sqrt(det)) / (2*a);
        Root2 = ((-b) - sqrt(det)) / (2*a);
    }
    cout<<"\nRoots are..."<<endl;
    cout<<"\nRoot1 = "<<Root1<<endl;
    cout<<"\nRoot2 = "<<Root2<<endl;


    return 0;
}


