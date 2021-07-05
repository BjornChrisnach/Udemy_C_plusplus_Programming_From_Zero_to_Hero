#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str ("sgnirtS no eroM");
    // string str ("Welcome Strings!");
    // string::iterator it;
    // for(it = str.begin() ; it != str.end() ; ++it)
    string::const_reverse_iterator it;
    for(it = str.crbegin() ; it != str.crend() ; ++it)
    {
        cout << *it;
    }

    return 0;
}