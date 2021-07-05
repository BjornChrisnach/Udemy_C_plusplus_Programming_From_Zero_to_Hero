#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str ("It's easy to code in C");
    cout << str << '\n';

    unsigned sz = str.size();

    str.resize (sz+2, '+');
    cout << str << '\n';

    str.resize (17);
    cout << str << '\n';

    return 0;
}