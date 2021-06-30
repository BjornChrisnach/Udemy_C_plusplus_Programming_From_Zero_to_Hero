/// Solution to Programming Challenge - Build a Simple Calculator
#include<iostream>
using namespace std;

int main()
{

    char opr;
    int n1, n2, result;

    cout<<"Enter Any 2 Numbers...";
    cin>>n1>>n2;

    cout<<"\nEnter the Operator";
    cin>>opr;

    switch(opr)
    {

        case '+': result = n1+n2;
                  break;
        case '-': result = n1 - n2;
                  break;
        case '*': result = n1 * n2;
                  break;
        case '/': result = n1 / n2;
                  break;
        default: cout<<"Invalid Operator";
                exit(0);

    }
    cout<<"The Result is.."<<result;
}
