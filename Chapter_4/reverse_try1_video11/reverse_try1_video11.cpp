// Programming challenge, find the reverse of a given number
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int origNum, revNum, len, i;
    string origStr, revStr;

    cout << "Enter a positive number: ";
    cin >> origNum;

    origStr = to_string(origNum);
    len = origStr.length();
    for(i = 0; i < len; i++)
    {
        revStr[i] = origStr[(len - (i + 1))];
    }
    revNum =  stoi(revStr);
    
    cout << "Input number was "<<origNum<<", reversed output number is "<<revNum<<endl;

    return 0;
}