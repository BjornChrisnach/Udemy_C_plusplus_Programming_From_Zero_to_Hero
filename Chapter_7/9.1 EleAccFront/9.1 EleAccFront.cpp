/// string::front
#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string str ("test string");
  str.front() = 'T';
  cout << str << '\n';
  return 0;
}
