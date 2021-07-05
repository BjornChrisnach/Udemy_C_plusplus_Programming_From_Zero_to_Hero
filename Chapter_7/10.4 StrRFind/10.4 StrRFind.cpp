/// string::find/rfind
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  string str("The second son of my second brother is sick");
  string key("second");

  int found=str.rfind(key);

  if(found != string::npos)
    str.replace(found,key.length(),"Third");
  cout<<str<<endl;

  return 0;
}
