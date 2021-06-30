/// practice Program: Switch-Case Control Statement
#include<iostream>
using namespace std;

int main()
{

    int rating;

    cout<<"Enter Rating (1 to 5) ";
    cin>>rating;

    switch(rating)
    {
        case 1: cout<<"Excellent"<<endl;
                break;
        case 2: cout<<"Very Good"<<endl;
                break;
        case 3: cout<<"Good"<<endl;
                break;
        case 4: cout<<"Satisfactory"<<endl;
                break;
        case 5: cout<<"Not satisfactory"<<endl;
                break;
        default: cout<<"Invalid Rating"<<endl;

    }
}
