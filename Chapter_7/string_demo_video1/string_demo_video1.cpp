#include <iostream>
using namespace std;

int main()
{
    // char s[12] = "Hello world"; //11 characters but there is the '\0' or NULL character after each char array
    // char s[] = "Hello world and welcome to Strings";
    // char s[] = {'H', 'e', 'l', 'l', 'o', '\0', 'a', 'n', 'd'}; // eveything after the null chracter doesn't get printed
    // char s[] = {97, 98, 99, 65, 66, 67, '\0'}; // using ascii code characters
    // char *s = "Hello"; // Builds with a warning ISO c++ forbids it
    string s = "Hello Strings !";

    std::cout << s << endl;

    return 0;
}