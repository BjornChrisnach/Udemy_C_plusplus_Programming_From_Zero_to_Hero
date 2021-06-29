/// Programming Challenge - Finding Maximum of 2 and Maximum of 3
///                         given numbers using Ternary Operator
#include<iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "Enter any 3 numbers :" << endl;
    cin >> a >> b >> c;

    d = (a > b && a > c) ? a : (b > c ? b : c);

    cout << "Maximum is "<<d<<endl;

    return 0;
}