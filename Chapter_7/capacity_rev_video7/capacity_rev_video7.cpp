#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello";
    // it takes the iterators to the start and end of the string as arguments
    reverse(str.begin(), str.end());
    cout << str << endl;

    return 0;
}