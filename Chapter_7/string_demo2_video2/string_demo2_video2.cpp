#include <iostream>
using namespace std;

int main()
{
    char str[20], s[20];

    cout << "Enter your name :";
    cin.getline(str, 20);
    cout << "Welcome " << str << endl;

    cout << "Enter another name :";
    cin.getline(s, 20);
    cout << "Welcome " << s << endl;

    return 0;
}