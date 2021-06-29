// Programming challenge, find the reverse of a given number
#include <iostream>
using namespace std;

int main()
{
    int origNum, revNum = 0, i, tmpNum;

    cout << "Enter a positive number: ";
    cin >> origNum;

    tmpNum = origNum;
    for(i = 0; tmpNum > 0; i++)
    {
        revNum = revNum * 10 + (tmpNum % 10);
        tmpNum = tmpNum / 10;
    }
    cout << "Input number was "<<origNum<<", reversed output number is "<<revNum<<endl;

    return 0;
}