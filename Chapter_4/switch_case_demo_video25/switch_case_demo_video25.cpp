// Program to demnstrate switch-case in C++
#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    switch (x)
    {
        case 1: cout << "Your choice is 1";
                break;
        case 2: cout << "Your choice is 2";
                break;
        case 3: cout << "Your choice is 3";
                break;
        default: cout << "Choice other than 1, 2 and 3......";
                break;
    }

    return 0;
}