/// programming Challenge Solution:
/// for finding user name from email address and Validating
# include<iostream>
#include<string>
using namespace std;

int main()
{
	string email="sharief_123@gmail.com";
	int i = email.find('@');
	int count=0;
	string user = email.substr(0,i);
	cout<<"User Name is..."<<user<<endl;

	for(int j=0;j<i;j++)
    {
        if(user[j] >=65 && user[j]<=90 || user[j] >=97 && user[j]<=122
           || user[j] >=48 && user[j]<=57 || user[j] == '_' || user[j]== '.')
            count++;
    }
    if(count == i)
        cout<<"Valid Username..."<<endl;
    else
        cout<<"Not a Valid User name.."<<endl;
    return 0;
}