/// template specialization
#include <iostream>
using namespace std;

/// 1. class template
template <class T>
class mycontainer
{
    T element;
public:
    mycontainer(T arg){element=arg;}
    T increase(){return ++element;}
};
template <>
class mycontainer<char>
{
    char element;
public:
    mycontainer(char arg){element=arg;}
    char uppercase()
    {
        if((element>='a') && (element<='z'))
            element += 'A' - 'a';
        return element;
    }
};
int main()
{
    mycontainer<int> myint(10);
    mycontainer<float> myfloat(11.5);
    mycontainer<char> mychar('j');
    cout<<myint.increase()<<endl;
    cout<<myfloat.increase()<<endl;
    cout<<mychar.uppercase()<<endl;
}
