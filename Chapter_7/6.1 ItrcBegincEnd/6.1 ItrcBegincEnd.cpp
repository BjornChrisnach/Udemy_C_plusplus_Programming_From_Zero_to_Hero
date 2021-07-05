#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("String Iterators");
  for (auto it=str.cbegin(); it!=str.cend(); ++it)
    		cout << *it;
  cout << '\n';
  return 0;
}
