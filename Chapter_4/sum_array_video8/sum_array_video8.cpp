#include <iostream>
using namespace std;

int main()
{
    int i, sum = 0, array1[8] = {1, 2, 4, 5, 6, 7, 20, 25};
    int arrSize = sizeof(array1)/sizeof(array1[0]);

    for(i = 0; i < arrSize; i++)
    {
        sum += array1[i];
    }
    cout << "The sum of the given array is "<<sum<<endl;
}