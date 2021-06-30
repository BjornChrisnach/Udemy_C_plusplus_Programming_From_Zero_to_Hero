// Programming challenge, search a key element in an array using binary search technique
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int key, i, *searchArray, n, low, high, mid, tmpIndexLow;
    int tmpIndexHigh, tmpIndexMid;
    int keyFound = 0;
    
    cout << "Enter the amount of elements that you are using.. :"<<endl;
    cin >> n;

    searchArray = new int[n];

    cout << "Enter the elements.. :"<<endl;
    for(i = 0; i < n; i++)
    {
        cin >> searchArray[i];
    }

    stable_sort(searchArray, searchArray + n);

    cout << "Enter the key value that has to be found: ";
    cin >> key;

    low = searchArray[0];
    tmpIndexLow = 0;
    high = searchArray[n - 1];
    tmpIndexHigh = (n - 1);
    tmpIndexMid = ((tmpIndexLow + tmpIndexHigh) / 2);
    mid = searchArray[tmpIndexMid];

    if(mid == key)
    {
        keyFound = 1;
    }
    
    i = 0;
    while(low != high || keyFound == 0)
    {
        if(key < mid)
        {
            tmpIndexHigh = tmpIndexMid - 1;
            high = searchArray[tmpIndexHigh];
            tmpIndexMid = ((tmpIndexLow + tmpIndexHigh) / 2);
            mid = searchArray[tmpIndexMid];
        }
        if(mid == key)
        {
            keyFound = 1;
            break;
        }

        else if(key > mid)
        {
            tmpIndexLow = tmpIndexMid + 1;
            low = searchArray[tmpIndexLow];
            tmpIndexMid = ((tmpIndexLow + tmpIndexHigh) / 2);
            mid = searchArray[tmpIndexMid];
        }
        if(mid == key)
        {
            keyFound = 1;
            break;
        }

        if(mid == low || mid == high)
        {
            mid = high;
            mid = low;
            if(key != mid)
            {
                keyFound = 0;
                break;
            }
        }
    }

    if(keyFound == 1)
    {
        cout << "The key "<<key<<" has been found"<<endl;
    }
    else
    {
        cout << "The key "<<key<<" has not been found"<<endl;
    }

    return 0;
}