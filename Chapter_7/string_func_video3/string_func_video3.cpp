#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Hi";
    char s2[20] = "Hello";
    int result;

    // result = strcmp(s1, s2);
    result = strncmp(s1, s2, 1);

    if(result == 0)
    {
        cout << " Strings ... "<<s1<<" and "<<s2<<" are equal"<<endl;
    }
    else if(result < 0)
    {
        cout << " String ... "<<s1<<" is smaller than "<<s2<<endl;
    }
    else
    {
        cout << " String ... "<<s1<<" is greater than "<<s2<<endl;
    }
    
    return 0;
}