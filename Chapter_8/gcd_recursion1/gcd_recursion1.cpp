#include <iostream>
using namespace std;

int calculateGreatestCommonDivisor(int number1, int number2);

int origNumber1, origNumber2;

int main()
{
    int gcd = 0;
    bool areSameFirstCheck = true;
    cout << "Enter 2 numbers to get the (GCD) Greatest Common Divisor: " << endl;
    cin >> origNumber1 >> origNumber2;

    gcd = calculateGreatestCommonDivisor(origNumber1, origNumber2);
    cout << "Greatest common divisor (GCD) for "<<origNumber1<< " and "<<origNumber2<< " is "<<gcd<<endl;

    return 0;
}

int count = 0;
int calculateGreatestCommonDivisor(int number1, int number2)
{
    int tmpGcd = 0;
    count++;

    if(count == 1 && number1 == number2)
    {
        return number1;
    }
    else
    {
        int j = number1, k = number2;
        while(j >= 2)
        {
            if(origNumber1 > origNumber2)
            {
                if(number1 % 2 == 0)
                {
                    j = number1 / 2;
                    if(number1 % j == 0 && number2 % j == 0)
                    {
                        tmpGcd = j;
                        return tmpGcd;
                    }
                    else
                    {
                        number1 = j;
                        tmpGcd = calculateGreatestCommonDivisor(number1, number2);
                    }
                }
                else if(number1 % 3 == 0)
                {
                    j = number1 / 3;
                    if(number1 % j == 0 && number2 % j == 0)
                    {
                        tmpGcd = j;
                        return tmpGcd;
                    }
                    else
                    {
                        number1 = j;
                        tmpGcd = calculateGreatestCommonDivisor(number1, number2);
                    }
                }
            }
            else if(origNumber1 < origNumber2)
            {
                if(number2 % 2 == 0)
                {
                    k = number2 / 2;
                    if(number1 % k == 0 && number2 % k == 0)
                    {
                        tmpGcd = k;
                        return tmpGcd;
                    }
                    else
                    {
                        number2 = k;
                        tmpGcd = calculateGreatestCommonDivisor(number1, number2);
                    }
                }
                else if(number2 % 3 == 0)
                {
                    k = number2 / 3;
                    if(number1 % k == 0 && number2 % k == 0)
                    {
                        tmpGcd = k;
                        return tmpGcd;
                    }
                    else
                    {
                        number2 = k;
                        tmpGcd = calculateGreatestCommonDivisor(number1, number2);
                    }
                }
            }
        }
    }
}