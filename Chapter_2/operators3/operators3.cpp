/** Program to demonstrate operators */

#include <iostream>
using namespace std;

int main()
{
    int a = 21;
    int c;

    c = a;
    cout << "Line 1 - = Operator, value of c = : "<<c<<endl;

    c += a;
    cout << "Line 1 - += Operator, value of c = : "<<c<<endl;

    c -= a;
    cout << "Line 1 - -= Operator, value of c = : "<<c<<endl;

    c *= a;
    cout << "Line 1 - *= Operator, value of c = : "<<c<<endl;

    c /= a;
    cout << "Line 1 - /= Operator, value of c = : "<<c<<endl;

    c = 200;
    c %= a;
    cout << "Line 1 - %= Operator, value of c = : "<<c<<endl;

    return 0;
}