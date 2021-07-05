#include <iostream>
#include <string>
using namespace std;

int main()
{
    string email = "John123@gmail.com", username = "";
    int foundIndex = 0, count = 0;

    foundIndex = email.find('@');
    username = email.substr(0,(foundIndex));
    cout<<"User name is "<<username<<endl;

    for(int i = 0; i < username.length(); ++i)
    {
        if(username[i] >= 65 && username[i] <= 90 || username[i] >=97 && username[i]<=122
           || username[i] >=48 && username[i]<=57 || username[i] == '_' || username[i]== '.')
        {
         count++;   
        }  
    }
    if(count == foundIndex)
    {
        cout << "The given username is valid"<<endl;
    }
    else
    {
        cout << "The given username is not valid"<<endl;
    }

    return 0;
}