#include <iostream>
using namespace std;

int main()
{
    double sum = 0;
    int n;

    cout << "Sum of numbers...."<<endl;
    cout << "Enter any number...";
    cin>>n;

    sum = n * (n + 1) / 2;
    cout << "The sum is..."<<sum<<endl;

    return 0;
}