/// string::back
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("hello world");
  str.back() = '!';
  cout << str << '\n';
  return 0;
}
