// Programming challenge - compute the sum and absolute difference of 2 integers,
// using pointers as paramters to a function
#include <iostream>
using namespace std;

int calculateAbsoluteDifference(int*, int*);
int calculateSum(int*, int*);

int main()
{
    int x, y, absDiff, sum;
    int* ptrHighest;
    int* ptrLowest;

    cout << "Enter two numbers to get absolute difference and sum :";
    cin >> x >> y;

    if(x >= y)
    {
        ptrHighest = &x;
        ptrLowest = &y;    
    }
    else if (y >= x)
    {
        ptrHighest = &y;
        ptrLowest = &x;
    }

    absDiff = calculateAbsoluteDifference(ptrHighest, ptrLowest);
    sum = calculateSum(ptrHighest, ptrLowest);

    cout << "Absolute difference is " << absDiff << endl;
    cout << "Sum is " << sum << endl;
    
    return 0;
}

int calculateAbsoluteDifference(int* num1, int* num2)
{
    int result;
    if(num1 > num2)
    {
        result = abs(*num1 - *num2);
    }
    else
    {
        result = abs(*num2 - *num1);
    }
    return result;
}

int calculateSum(int* number1, int* number2)
{
    int result;
    result = *number1 + *number2;

    return result;
}