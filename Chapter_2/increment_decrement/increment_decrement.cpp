//Demonstrating increment and decrement operators
#include <stdio.h>
using namespace std;

int main()
{
    int a = 5, b = 10;
    float c = 5.5, d = 10.5;
    printf("++a = %d\n", ++a);
    printf("--b = %d\n", --b);
    printf("c++ = %f\n", c++); // %f will be filled in first with the initial value of 5.5, before c gets incremented to 6.5
    printf("d-- = %f\n", d--); // %f will be filled in first with the initial value of 10.5, before c gets decremented to 9.5

    return 0;
}