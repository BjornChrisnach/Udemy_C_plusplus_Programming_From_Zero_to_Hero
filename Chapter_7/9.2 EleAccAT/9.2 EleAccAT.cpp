#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("C++ string");
  for (unsigned i=0; i<str.length(); ++i)
  {
    cout << str.at(i)<<endl;
  }
  return 0;
}
