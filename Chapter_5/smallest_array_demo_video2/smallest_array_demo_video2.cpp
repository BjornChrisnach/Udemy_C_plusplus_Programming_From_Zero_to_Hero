// Program to display smallest elements in an array
#include <iostream>
using namespace std;

int main()
{
    int i, n;
    float arr[20];
    cout << "Enter total number of elements(Range:1 to 20): ";
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cout << "Enter number "<<i + 1<<":";
        cin >> arr[i];
    }
    for(i = 0; i < n; i++)
    {
        if(arr[0] > arr[i])
        {
            arr[0] = arr[i];
        }
    }
    cout << "smallest element is... "<<arr[0];
    
    return 0;
}