#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int data[] = {1, 2, 3, 4, 5, 6};

    for(auto& n: data)
    {
        cout << ++n <<" ";
    }
    
    cout << endl;

    for(int i = 0; i < 6; ++i)
    {
        cout << data[i]<<" ";
    }
    cout << endl;
    
    return 0;
}