// Programming challenge, print the multiplication table for a given number, in the given format
#include <iostream>
using namespace std;

int main()
{
    int i, n, sum, tmpNum, j, k;
    cout << "Enter a number for the multiplication table: "<<endl;
    cin >> n;

    tmpNum = 2;
    for(i = 2; i <= n; i++)
    {
        for(k = i, j = 1; j <= 10; j++)
        {
            sum = j * tmpNum;
            cout <<k<<" x "<<j<<" = "<<sum<<endl;
               
            if(j == 10 && tmpNum != n)
            {
                tmpNum += 1;
            }
        }
        cout << endl;
    }

    return 0;
}