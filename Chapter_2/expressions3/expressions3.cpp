#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, Root1, Root2, Desc;

    cout << "Roots of the quadratic equation.."<<endl;
    cout << "Enter the values of a, b and c..";
    cin >> a >> b >> c;

    Desc = (b*b) - (4*a*c);
    cout << "Descr is.... "<<Desc<<endl;
    Root1 = (-b + sqrt(Desc))/2*a;
    Root2 = (-b - sqrt(Desc))/2*a;

    cout << "The Roots are... "<<Root1<<" and "<<Root2<<endl;

    return 0;
}