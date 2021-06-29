// Program challenge - Find the factors of a number
#include <iostream>
#include <string>
// #include <vector>
using namespace std;

int main()
{
    // int factors[40];
    int n, i;
    // int k = 0;
    // int arrSize = sizeof(factors)/sizeof(factors[0]);
    string output = "";
    // vector<int> v;

    cout << "Enter a number, to find the factors: ";
    cin >> n;

    for(i = 1; i <= (n / 2); i++)
    {
        if(n % i == 0)
        {
            // v.push_back(i);
            // factors[k] = i;
            // k += 1;
            if(i == (n / 2))
            {
                output = output + to_string(i);    
            }
            else
            {
                output = output + to_string(i) + ", ";
            } 
        }
    }
    cout << "The factors are "<<output<<endl;

    return 0;
}