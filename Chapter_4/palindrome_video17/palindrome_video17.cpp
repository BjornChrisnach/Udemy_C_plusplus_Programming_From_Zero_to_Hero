// Programming challenge, find whether a given number is a palindrome or not
#include <iostream>
using namespace std;

int main()
{
    int i, inputNum, tmpNum, rem, revResult = 0, palindrome;

    cout << "Enter a number, to check for palindrome number: "<<endl;
    cin >> inputNum;

    tmpNum = inputNum;

    for(i = 0; tmpNum > 0; i++)
    {
        rem = tmpNum % 10;
        revResult = revResult * 10 + rem;
        tmpNum = tmpNum / 10;
    }
    if(revResult == inputNum)
    {
        cout << "The number "<<inputNum<<" is a palindrome number"<<endl;
    }
    else
    {
        cout << "The number "<<inputNum<<" is not a palindrome number"<<endl;
    }

    return 0;
}