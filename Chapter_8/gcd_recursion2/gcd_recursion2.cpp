#include <iostream>
using namespace std;

int calculateGreatestCommonDivisor(int number1, int number2);

int main()
{
    int gcd = 0, origNumber1, origNumber2;
    cout << "Enter 2 numbers to get the (GCD) Greatest Common Divisor: " << endl;
    cin >> origNumber1 >> origNumber2;

    gcd = calculateGreatestCommonDivisor(origNumber1, origNumber2);
    cout << "Greatest common divisor (GCD) for "<<origNumber1<< " and "<<origNumber2<< " is "<<gcd<<endl;

    return 0;
}


int calculateGreatestCommonDivisor(int number1, int number2)
{
    int tmpGcd = 0, j = 0;
    
    if(number1 == number2)
    {
        return number1;
    }
    else
    {
        if(number1 > number2)
        {
            j = number1 - number2;
            number1 = j;
            tmpGcd = calculateGreatestCommonDivisor(number1, number2);
        }
        else if(number1 < number2)
        {
            j = number2 - number1;
            number2 = j;
            tmpGcd = calculateGreatestCommonDivisor(number1, number2);
        }
    }
}