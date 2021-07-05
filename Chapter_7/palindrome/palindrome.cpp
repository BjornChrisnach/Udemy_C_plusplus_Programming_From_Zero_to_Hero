#include <iostream>
using namespace std;

int main()
{
    string strInput, strRev, strLowCase, tmpS;
    int i, len;

    cout << "Enter a word, so we can check for palindrome: " << endl;
    cin >> strInput;

    for(i = 0; strInput[i] != '\0'; ++i)
    {
        tmpS = strInput[i];

        if(tmpS[0] >= 65 && tmpS[0] <= 90)
        {
            tmpS[0] = tmpS[0] + 32;
        }
        
        strLowCase.append(tmpS);
    }

    len = (strLowCase.length() -1);

    // for(i = 0; strLowCase[i] != '\0'; ++i)
    for(i = len; i >= 0; --i)
    {
        // tmpS = strLowCase[(strLowCase.length() -1) -i];
        tmpS = strLowCase[i];
        
        strRev.append(tmpS);
    }

    if(strLowCase.compare(strRev)==0)
    {
        cout << "The word or string is a palindrome. " << endl;
    }
    else
    {
        cout << "The word or string is not a palindrome. " << endl;
    }
    
    // if(strLowCase == strRev)
    // {
    //     cout << "The word or string is a palindrome. " << endl;
    // }
    // else
    // {
    //     cout << "The word or string is not a palindrome. " << endl;
    // }

    return 0;
}