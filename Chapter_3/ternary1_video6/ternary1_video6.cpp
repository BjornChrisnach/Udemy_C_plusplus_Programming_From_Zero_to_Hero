/// Programming Challenge - Finding Maximum of 2 and Maximum of 3
///                         given numbers using Ternary Operator
#include<iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter any 2 numbers :" << endl;
    cin >> a >> b;

    c = (a > b) ? a : b;

    cout << "Maximum is "<<c<<endl;

    return 0;
}