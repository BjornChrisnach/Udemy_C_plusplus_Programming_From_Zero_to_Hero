/// comparing cars with cars
#include <iostream>
#include <string>

int main ()
{
  std::string str1 ("Small car");
  std::string str2 ("Big car");

  if (str1.compare(str2) != 0)
    std::cout << str1 << " is not " << str2 << '\n';

  if (str1.compare(4,3,"car") == 0)
    std::cout << "still, " << str1 << " is a car\n";

  if (str2.compare(str2.size()-3,3,"car") == 0)
    std::cout << "and " << str2 << " is also a car\n";

  if (str1.compare(6,3,str2,5,3) == 0)
    std::cout << "therefore, both are cars\n";

  return 0;
}
