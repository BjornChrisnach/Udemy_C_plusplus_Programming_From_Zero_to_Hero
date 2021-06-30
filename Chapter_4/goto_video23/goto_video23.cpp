// even or not using goto statement
#include <iostream>
using namespace std;

void checkEvenOrNot(int num)
{
    if(num % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }
    even:
        cout << num << " is even";
            return;
    odd:
        cout << num << " is odd";
}

int main()
{
    int num = 26;
    checkEvenOrNot(num);
    
    return 0;
}