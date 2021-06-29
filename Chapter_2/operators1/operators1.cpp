/** Program to demonstrate operators */

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 4, c;
    c = a + b;

    cout << "\na + b = "<<c;
    c = a - b;
    cout << "\na - b = "<<c;
    c = a * b;
    cout << "\na * b = "<<c;
    c = a / b;
    cout << "\na / b = "<<c;
    c = a % b;
    cout << "\nRemainder when "<<a<<" divided by "<<b<<" = "<<c<<endl;

    return 0;
}