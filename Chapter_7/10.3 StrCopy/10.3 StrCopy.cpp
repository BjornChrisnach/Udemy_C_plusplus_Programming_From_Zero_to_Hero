/// string::copy
#include <iostream>
#include <string>
using namespace std;
int main ()
{
  char b[20];
  string str("String Copy Function");
  int len=str.copy(b,4,7);
  b[len] = '\0';
  cout<<"Copied String is..."<<b<<endl;

  return 0;
}
