#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 4, c;
    c = a + b;
    cout << "a + b = "<<c<<endl;
    c = a - b;
    cout << "a - b = "<<c<<endl;
    c = a * b;
    cout << "a * b = "<<c<<endl;
    c = a / b;
    cout << "a / b = "<<c<<endl;
    c = a % b;
    cout << "Remainder when a divided by b = "<<c<<endl;

    return 0;
}