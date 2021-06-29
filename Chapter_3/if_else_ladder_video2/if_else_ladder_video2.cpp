#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter the letter: ";
    cin >> ch;

    if((ch == 'A') || (ch == 'a'))
    {
        cout << "Your character is "<<ch<<". Your character is a vowel"<<endl;
    }
    else if((ch == 'E') || (ch == 'e'))
    {
        cout << "Your character is "<<ch<<". Your character is a vowel"<<endl;
    }
    else if((ch == 'I') || (ch == 'i'))
    {
        cout << "Your character is "<<ch<<". Your character is a vowel"<<endl;
    }
    else if((ch == 'O') || (ch == 'o'))
    {
        cout << "Your character is "<<ch<<". Your character is a vowel"<<endl;
    }
    else if((ch == 'U') || (ch == 'u'))
    {
        cout << "Your character is "<<ch<<". Your character is a vowel"<<endl;
    }
    else
    {
        cout << "Your character is "<<ch<<", not a vowel"<<endl;
    }
    return 0;
}