/** Program to demonstrate the working of expressions */
#include <iostream>
using namespace std;

int main()
{
    double A, base, height;
    cout << "Area of a triangle..." << endl;
    cout << "Enter the base and height...";
    cin >> base >> height;

    A = (base*height)/2;
    
    cout << "The area with base "<<base<<" and height = "<<height<<" is "<<A<<endl;
    return 0;
}