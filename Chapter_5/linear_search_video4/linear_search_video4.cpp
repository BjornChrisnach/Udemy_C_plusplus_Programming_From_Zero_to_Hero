// Programming challenge, search a key element in array using linear search technique
#include <iostream>
using namespace std;

int main()
{
    int key, i, *searchArray, n;
    int keyFound = 0;
    
    cout << "Enter the amount of elements that you are using.. :"<<endl;
    cin >> n;

    searchArray = new int[n];

    cout << "Enter the elements.. :"<<endl;
    for(i = 0; i < n; i++)
    {
        cin >> searchArray[i];
    }

    cout << "Enter the key value that has to be found: ";
    cin >> key;

    for(i = 0; i < n; i++)
    {
        if(key == searchArray[i])
        {
            cout << "The key "<<key<<" is found at index "<<i<<endl;
            keyFound = 1;
            break;
        }
    }
    if(keyFound == 0)
    {
        cout << "The key "<<key<<" is not found"<<endl;
    }

return 0;
}