#include <iostream>
#include <string>
using namespace std;

int main()
{
    char c;
    string str;
    cout << "Please type some lines of text. Enter a dot (.) to finish:\n";
    do 
    {
        c = cin.get();
        str += c;
        if(c=='\n')
        {
            cout << str;
            str.clear();
        }
    }   while (c!='.');

    return 0;
}