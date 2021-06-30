// Programming challenge, print the following pascal triangle given below
#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i <= 6; i++)
    {
        cout << "\t\t";
        for(int j = 6; j > i; j--)
        {
            cout << " ";
        }
        for(int k = 1; k <= i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}